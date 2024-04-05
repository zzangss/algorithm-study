#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    string temp1 = to_string(a) + to_string(b);
    string temp2 = to_string(c) + to_string(d);

    long long ab = stoll(temp1);
    long long cd = stoll(temp2);

    cout << ab + cd;
    return 0;
}