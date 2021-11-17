#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    std::string line;
    std::set<std::string> st;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> line;
        st.insert(line);
    }

    std::vector<std::string> arr;
	for (const auto& s : st)
		arr.emplace_back(s);

    std::sort(arr.begin(), arr.end(), [](const std::string& a, const std::string& b) {
        if (a.size() < b.size())
            return true;

        return a < b;
    });

    for (const auto& s : arr)
    {
        std::cout << s << '\n';
    }
}
