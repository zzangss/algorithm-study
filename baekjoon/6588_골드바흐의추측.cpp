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
    vector<int> primeNumber;

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

    for (int i = 3; i <= MAX; i++)
    {
        if (primeNumberCheck[i] == 0)
        {
            primeNumber.push_back(i);
        }
    }

    int input = 1;

    while (input)
    {
        cin >> input;
        int start = 0, end = input;
        int check = 0;
        while (start <= end)
        {

            int sum = primeNumber[start] + primeNumber[end];
            if (input == sum)
            {
                cout << input << " = " << primeNumber[start] << " + " << primeNumber[end] << "\n";
                check = 1;
                break;
            }
            else if (input < sum)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        cout << "Goldbach's conjecture is worng.";
    }

    return 0;
}
