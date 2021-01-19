import java.util.Scanner;
import java.util.Stack;

public class Infix_postfix
{
    static int precedence(char ch)
    {
        return switch (ch)
                {
                    case '+', '-' -> 1;
                    case '*', '/' -> 2;
                    case '^' -> 3;
                    default -> -1;
                };
    }

    public static void main(String[] args)
    {
        String expression;
        StringBuilder result = new StringBuilder();
        Scanner in = new Scanner(System.in);
        expression = in.nextLine();
        in.close();
        int i;
        char op;
        Stack<Character> stack = new Stack<>();
        for (i = 0; i < expression.length(); i++)
        {
            op = expression.charAt(i);
            if (Character.isLetterOrDigit(op)) //if its a Letter or Digit...Print
                result.append(op);
            else if (op == '(') // if its ( Push to the stack
                stack.push(op);
            else if (op == ')')
            {
                while (!stack.isEmpty() && stack.peek() != '(') //Pop until '(' is encountered and Stack is not empty
                    result.append(stack.pop());
                if (!stack.isEmpty() && stack.peek() != '(')
                    System.out.print("Invalid");
                else
                    stack.pop();
            }
            else //Operator is Encountered
            {
                //if Precedence operator is less than peek
                while (!stack.isEmpty() && (precedence(op) <= precedence(stack.peek())))
                {
                    if (stack.peek() == '(')
                        System.out.println("Invalid Expression");
                    result.append(stack.pop());
                }
                stack.push(op);// Push the operator
            }
        }
        while (!stack.isEmpty()) //Pop All
        {
            if (stack.peek() == '(')
                System.out.println("Invalid Expression");
            result.append(stack.pop());
        }
        System.out.println(result);
    }
}
