#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int arr[26] = { 0 };
    std::string line;
    std::cin >> line;

    for (auto c : line)
    {
        ++arr[std::tolower(c) - 'a'];
    }

    int maxCount = -9999;
    std::vector<char> maxItems;

    for (int i = 0; i < 26; ++i)
    {
        if (arr[i] > maxCount)
        {
            maxCount = arr[i];
            maxItems.clear();
            maxItems.emplace_back(i + 'A');
        }
        else if (arr[i] == maxCount)
        {
            maxItems.emplace_back(i + 'A');
        }
    }

    if (maxItems.size() == 1)
    {
        std::cout << maxItems[0] << std::endl;
    }
    else
    {
        std::cout << "?" << std::endl;
    }
}
