#include <iostream>

using namespace std;

int factorial(int a)
{
    if (a <= 1)
    {
        return a;
    }
    else
    {
        return a * factorial(a - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    if(n == 0) {
        cout << 1;
        return 0;
    }
    int result = factorial(n);

    cout << result;
}