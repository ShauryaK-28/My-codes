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
    int occurence=0;
    int x;
    cin>>x;
    for (int i = 0; i < size; i++)
    {
        if(x==v[i]){
            occurence+=1;
        }
    }
    cout<<occurence<<endl;
return 0;
}