#include <bits/stdc++.h>

bool arr[1000001];

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);

    arr[1] = true;

    for (int i = 2; i <= N; ++i)
    {
        if (!arr[i])
        {
            for (int j = i * 2; j <= N; j += i)
            {
                arr[j] = true;
            }
        }
    }

    for (int i = M; i <= N; ++i)
    {
        if (!arr[i])
        {
            printf("%d\n", i);
        }
    }
}
