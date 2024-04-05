#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;

    getline(cin, str);

    for(int i =0; i<str.size();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(str[i]-'a'+13 >= 26){
                cout << (char)(str[i] - 13);
            }
            else{
                cout << (char)(str[i] + 13);
            }
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            if(str[i]-'A'+13 >= 26){
                cout << (char)(str[i] - 13);
            }
            else{
                cout << (char)(str[i] + 13);
            }
        }
        else{
            cout << str[i];
        }
    }

    return 0;

}