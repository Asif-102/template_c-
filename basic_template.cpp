#include <bits/stdc++.h>
using namespace std;

template <typename t1, typename t2>
t2 sum(t1 a, t1 b)
{
    t2 s = (a + b) * 2.11;
    return s;
}

int main(void)
{
    int a = 10, b = 20;
    double s = sum<int, double>(a, b);

    cout << s << endl;
}