#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string line;
    while (std::getline(std::cin, line))
    {
        if (line == "0")
            break;

        std::cout << ((line == std::string(rbegin(line), rend(line))) ? "yes" : "no") << '\n';
    }
}
