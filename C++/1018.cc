#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N, M;
    std::cin >> N >> M;

    std::string line;
    std::vector<char> board(N * M);
    for (int j = 0; j < N; ++j)
    {
        std::cin >> line;
        for (int i = 0; i < M; ++i)
        {
            board[j * M + i] = (line[i] == 'B') ? 0 : 1;
        }
    }

    int minValue = 64;
    for (int j = 0; j < N - 7; ++j)
    {
        for (int i = 0; i < M - 7; ++i)
        {
            const char zeroPt = board[j * M + i];
            
            int count1 = 0, count2 = 0;

            for (int k = 0; k < 8; ++k)
            {
                for (int l = 0; l < 8; ++l)
                {
                    if ((k + l) % 2 == 0)
                    {
                        if (board[(j + k) * M + i + l] == zeroPt)
                            ++count1;
                        else
                            ++count2;
                    }
                    else
                    {
                        if (board[(j + k) * M + i + l] != zeroPt)
                            ++count1;
                        else
                            ++count2;
                    }
                }
            }

            if (minValue > count1)
                minValue = count1;
            if (minValue > count2)
                minValue = count2;
        }
    }

    std::cout << minValue;
}
