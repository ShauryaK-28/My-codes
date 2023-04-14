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
    int count=0;
    int x;
    cin>>x;
    for (int i = 0; i < size; i++)
    {
        if(x>v[i]){
            count+=1;
        }
    }
    cout<<count<<endl;
return 0;
}