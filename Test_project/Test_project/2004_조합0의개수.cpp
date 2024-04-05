#include <iostream>

using namespace std;

int combination(int n, int r)
{
    int num = 0;
    for(long long i = r; n/i>=1;i*=r){
        num += n/i;
    }

    return num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int checkNumTwo = 0, checkNumFive = 0;

    checkNumFive = combination(n,5) - combination(m, 5) - combination(n-m,5);
    checkNumTwo = combination(n,2) - combination(m, 2) - combination(n-m, 2);

    if(checkNumFive>checkNumTwo){
        cout << checkNumTwo;
    }
    else{
        cout << checkNumFive;
    }

    return 0;
}