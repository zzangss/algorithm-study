#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    int size = str.size();

    vector<string>v;

    for(int i =0; i<size; i++){
        v.push_back(str.substr(i));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i<v.size(); i++){
        cout << v[i] << "\n";
    }

    return 0;
}