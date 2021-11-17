#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int A, B;
    std::cin >> A >> B;

    if (A > B)
    {
        std::cout << ">";
    }
    else if (A < B)
    {
        std::cout << "<";
    }
    else if (A == B)
    {
        std::cout << "==";
    }
}
