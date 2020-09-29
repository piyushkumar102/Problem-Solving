import java.util.Scanner;
import java.util.Stack;

public class DFS
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int nodes = in.nextInt();
        int[][] matrix = new int[nodes][nodes];
        int[] visited = new int[nodes];
        int i, j;
        for (i = 0; i < nodes; i++)
        {
            for (j = 0; j < nodes; j++)
            {
                matrix[i][j] = in.nextInt();
            }
        }
        int root = in.nextInt();
        Stack<Integer> q = new Stack<>();
        q.push(root);
        visited[root] = 1;
        while (!q.isEmpty())
        {
            int current = q.peek();
            q.pop();
            System.out.print(current + " ->");
            for (i = 0; i < nodes; i++)
            {
                if ((visited[i] == 0) && matrix[current][i] == 1)
                {
                    q.push(i);
                    visited[i] = 1;
                }

            }
        }

    }
}

