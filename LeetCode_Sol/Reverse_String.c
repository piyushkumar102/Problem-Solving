void reverseString(char *s, int sSize)
{
    int c, e = sSize - 1;
    char t;
    for (c = 0; c < sSize / 2; c++)
    {
        t = s[c];
        s[c] = s[e];
        s[e] = t;
        e--;
    }
}