#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    if ((N % 4 == 0) && ((N % 100 != 0) || (N % 400 == 0)))
        std::cout << '1';
    else
        std::cout << '0';
}
