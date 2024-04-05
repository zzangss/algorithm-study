#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int result = n;

    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        if(num == 1){
            result--;
        }
        for(int k = 2; k<num;k++){
            if(num%k==0){
                result--;
                break;
            }
        }
    }

    cout << result;
    return 0;
}
