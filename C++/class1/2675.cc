#include <bits/stdc++.h>

int main()
{
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int R;
        std::string S;
        std::cin >> R >> S;

        for (const char c : S)
        {
            for (int i = 0; i < R; ++i)
            {
                std::cout << c;
            }
        }

        std::cout << '\n';
    }
}
