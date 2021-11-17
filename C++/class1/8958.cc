#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int T;
    std::cin >> T;

    std::string line;
    for (int t = 0; t < T; ++t)
    {
        std::cin >> line;

        int score = 0;
        int n = 0;
        for (const char c : line)
        {
            if (c == 'O')
            {
                score += ++n;
            }
            else
            {
                n = 0;
            }
        }

        std::cout << score << '\n';
    }
}
