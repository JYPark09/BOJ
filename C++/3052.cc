#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    std::set<int> st;

    int tmp;
    for (int i = 0; i < 10; ++i)
    {
        std::cin >> tmp;

        st.insert(tmp % 42);
    }

    std::cout << st.size();
}
