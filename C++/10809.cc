#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string line;
    std::cin >> line;

    int arr[26] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    for (int i = 0; i < line.size(); ++i)
    {
        if (arr[line[i] - 'a'] == -1)
            arr[line[i] - 'a'] = i;
    }

    for (int i = 0; i < 26; ++i)
        std::cout << arr[i] << ' ';
}
