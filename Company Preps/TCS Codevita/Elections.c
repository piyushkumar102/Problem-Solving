#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, t, x, y, count_of_a, count_of_b;
    string queue;
    cin >> n;
    cin >> queue;
    vector<pair<int, int>> party(n, {INT_MAX, INT_MAX});
    for (i = 0; i < n; i++)
    {
        if (queue[i] == 'A')
        {
            t = 0;
            j = i - 1;
            if (j >= 0)
            {
                for (j; j >= 0; j--)
                {
                    if (queue[j] == '-')
                    {
                        party[j].first = min(party[j].first, t);
                    }
                    else if (queue[j] == 'A' || queue[j] == 'B')
                    {
                        break;
                    }
                    ++t;
                }
            }
        }
        else if (queue[i] == 'B')
        {
            t = 0;
            j = i + 1;
            if (j < n)
            {
                for (j; j < n; j++)
                {
                    if (queue[j] == '-')
                    {
                        party[j].second = min(party[j].second, t);
                    }
                    else if (queue[j] == 'B' || queue[j] == 'A')
                    {
                        break;
                    }
                    t++;
                }
            }
        }
    }
    count_of_a = 0;
    count_of_b = 0;
    for (i = 0; i < n; i++)
    {
        x = party[i].first;
        y = party[i].second;
        if (queue[i] == 'A')
        {
            count_of_a++;
        }
        else if (queue[i] == 'B')
        {
            count_of_b++;
        }
        if (queue[i] == '-')
        {
            if (x > y)
            {
                count_of_b++;
            }
            else if (x < y)
            {
                count_of_a++;
            }
        }
    }
    if (count_of_a > count_of_b)
    {
        cout << "A";
    }
    else if (count_of_b > count_of_a)
    {
        cout << "B";
    }
    else
    {
        cout << "Coalition government";
    }
}