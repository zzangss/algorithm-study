#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    int gdb = 1, lcm = a*b;

    if(a>b){
        for(int i = a; i>=1;i--){
            if(a%i ==0 && b%i ==0){
                gdb = i;
                break;
            }
        }
    }
    else{
        for(int i = b; i >= 1;i--){
            if(a%i ==0 && b%i ==0){
                gdb = i;
                break;
            }
        }
    }

    cout << gdb << "\n" << lcm / gdb;

    return 0;
}
