#include <iostream>
#include <vector>
#define MAX 1000000

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> primeNumberCheck(MAX, 0);

    for (int i = 2; i * i <= MAX; i++)
    {
        if (primeNumberCheck[i] == 0)
        {
            for (int j = i * i; j <= MAX; j = j + i)
            {
                primeNumberCheck[j] = 1;
            }
        }
    }

    int input = 1;

    while (true)
    {
        cin >> input;
        if (input == 0)
            break;

        int check = 0;
        for (int i = 3; i <= input; i += 2)
        {
            if (primeNumberCheck[i] == 0 && primeNumberCheck[input - i] == 0)
            {
                cout << input << " = " << i << " + " << input - i << "\n";
                check = 1;
                break;
            }
        }
        if (!check)
        {
            cout << "Goldbach's conjecture is wrong."
                 << "\n";
        }
    }

    return 0;
}
