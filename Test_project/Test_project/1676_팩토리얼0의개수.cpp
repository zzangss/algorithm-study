#include <iostream>

using namespace std;

int checkNumTwo = 0;
int checkNumFive = 0;

void factorial(long long a)
{
    if (a > 1)
    {
        int temp = a;
        if (temp % 2 == 0)
        {
            while (temp % 2 == 0)
            {
                temp = temp / 2;
                checkNumTwo++;
            }
        }
        if (temp % 5 == 0)
        {
            while (temp % 5 == 0)
            {
                temp = temp / 5;
                checkNumFive++;
            }
        }
        factorial(a - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    factorial(n);

    if (checkNumFive > checkNumTwo)
    {
        cout << checkNumTwo;
    }
    else
    {
        cout << checkNumFive;
    }

    return 0;
}