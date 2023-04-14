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
    int evenSum=0;
    int oddSum=0;
    for (int i = 0; i < size; i++)
    {
        if (i%2==0)
        {
            evenSum+=v[i];
        }
        else{
            oddSum+=v[i];
        }
    }
    cout<<"evenSum = "<<evenSum<<endl;
    cout<<"oddSum = "<<oddSum<<endl;
    cout<<"difference = "<<abs(evenSum-oddSum);
return 0;
}