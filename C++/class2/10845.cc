#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    deque<int> Q;

    int N;
    cin >> N;

    string cmd;
    int tmp;
    for (int i = 0; i < N; ++i)
    {
        cin >> cmd;

        if (cmd == "push_back")
        {
            cin >> tmp;
            Q.push_back(tmp);
        }
        else if (cmd == "push_front")
        {
            cin >> tmp;
            Q.push_front(tmp);
        }
        else if (cmd == "pop_front")
        {
            if (Q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                tmp = Q.front();
                Q.pop_front();
                cout << tmp << '\n';
            }
        }
        else if (cmd == "pop_back")
        {
            if (Q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                tmp = Q.back();
                Q.pop_back();
                cout << tmp << '\n';
            }
        }
        else if (cmd == "size")
        {
            cout << Q.size() << '\n';
        }
        else if (cmd == "empty")
        {
            cout << Q.empty() << '\n';
        }
        else if (cmd == "front")
        {
            if (Q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << Q.front() << '\n';
            }
        }
        else if (cmd == "back")
        {
            if (Q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << Q.back() << '\n';
            }
        }
    }
}
