#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    int x;
    cin>>x;
    int last_occurence;
    for (int i = 0; i < size; i++)
    {
        if(v[i]==x){
            last_occurence=i;
        }
        else{
            last_occurence=-1;
        }
    }
    cout<<last_occurence;
return 0;
}