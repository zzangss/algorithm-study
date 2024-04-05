#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int check[4] = {0,0,0,0};

    while(true){
        getline(cin,str);

        if(cin.eof()) break;

        for(int i = 0; i<4; i++){
            check[i] = 0;
        }
        for(int i = 0; i<str.size(); i++){
            if(str[i]>='a' && str[i] <= 'z'){
                check[0]++;
            }
            else if(str[i] >= 'A' && str[i] <='Z'){
                check[1]++;
            }
            else if(str[i] >= '0' && str[i] <= '9'){
                check[2]++;
            }
            else if(str[i] == ' '){
                check[3]++;
            }
        }    
        for(int i =0; i< 4; i++){
        cout << check[i] << " ";
        }
        cout << "\n";
    }


}