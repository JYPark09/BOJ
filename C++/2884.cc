#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int H, M;
    std::cin >> H >> M;

    int time = H * 60 + M - 45;

    if (time < 0)
    {
        time += 24 * 60;
    }

    int hour = time / 60;
    int minute = time % 60;

    std::cout << hour << " " << minute << std::endl;
}
