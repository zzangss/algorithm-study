#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    vector<int> v(26,0);

    for(int i =0; i<str.size();i++){
        v[str[i] - 'a']++;
    }

    for(int i =0; i<26;i++){
        cout << v[i] << " ";
    }

    return 0;


}