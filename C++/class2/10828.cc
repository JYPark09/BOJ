#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    stack<int> S;

    int N;
    cin >> N;

    string cmd;
    int tmp;
    for (int i = 0; i < N; ++i)
    {
        cin >> cmd;

        if (cmd == "push")
        {
            cin >> tmp;
            S.push(tmp);
        }
        else if (cmd == "size")
        {
            cout << S.size() << '\n';
        }
        else if (cmd == "pop")
        {
            if (S.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                tmp = S.top();
                S.pop();
                cout << tmp << '\n';
            }
        }
        else if (cmd == "empty")
        {
            cout << S.empty() << '\n';
        }
        else if (cmd == "top")
        {
            if (S.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << S.top() << '\n';
            }
        }
    }
}
