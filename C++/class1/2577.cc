#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int A, B, C;
    std::cin >> A >> B >> C;

    int ans = A * B * C;

    int count[10] = { 0 };
    for (char c : std::to_string(ans))
    {
        ++count[c - '0'];
    }

    for (int i = 0; i < 10; ++i)
        std::cout << count[i] << '\n';
}
