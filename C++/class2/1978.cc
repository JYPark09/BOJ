#include <bits/stdc++.h>

bool arr[1001];

int main()
{
    arr[1] = true;

    for (int i = 2; i <= 1000; ++i)
    {
        if (!arr[i])
        {
            for (int j = i * 2; j <= 1000; j += i)
            {
                arr[j] = true;
            }
        }
    }

    int N;
    scanf("%d", &N);

    int tmp;
    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &tmp);
        ans += !arr[tmp];
    }

    printf("%d", ans);
}
