#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string strA, strB;
    std::cin >> strA >> strB;

    const int A = std::stoi(std::string(rbegin(strA), rend(strA)));
    const int B = std::stoi(std::string(rbegin(strB), rend(strB)));

    if (A > B)
        std::cout << A;
    else
        std::cout << B;
}
