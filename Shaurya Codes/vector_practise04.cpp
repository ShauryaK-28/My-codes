#include <iostream>
#include<vector>
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
    int sort=0;
    for (int i = 0; i < size; i++)
    {
    
        if(v[i]<v[i+1]){
            sort=1;
        }
        else{
            sort=0;
        }
    }
    if(sort==1){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Unnsorted"<<endl;
    }
return 0;
}