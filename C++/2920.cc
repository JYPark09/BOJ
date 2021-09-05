#include <bits/stdc++.h>

enum class Type {
    NONE,
    ASC,
    DSC,
    MIX
};

int main()
{
    std::ios::sync_with_stdio(false);

    int prev = 0, tmp;
    Type type = Type::NONE;

    for (int i = 0; i < 8; ++i)
    {
        std::cin >> tmp;

        if (i != 0)
        {
            if (type == Type::NONE)
            {
                if (tmp > prev)
                    type = Type::ASC;
                else if (tmp < prev)
                    type = Type::DSC;
            }
            else
            {
                if ((type == Type::ASC && tmp < prev) || (type == Type::DSC && tmp > prev))
                {
                    type = Type::MIX;
                    break;
                }
            }
        }

        prev = tmp;
    }

    if (type == Type::ASC)
    {
        std::cout << "ascending";
    }
    else if (type == Type::DSC)
    {
        std::cout << "descending";
    }
    else if (type == Type::MIX)
    {
        std::cout << "mixed";
    }
}
