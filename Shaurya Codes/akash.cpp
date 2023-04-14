#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s ;
    vector<int> v(26); 
    for(int i=0 ; i< s.size(); i++){
        v[s[i]-'a']++;
    }
    int mx =0,inx ; 
    for(int i=0 ; i<26 ; i++){
        if(v[i]>mx){
            mx=v[i];
            inx=i;
        }
    }
    cout << mx << " " << char(inx+'a') ;
return 0;
}