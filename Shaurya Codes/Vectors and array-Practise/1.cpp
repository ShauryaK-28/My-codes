#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    int count=0;
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((arr[i]+arr[j])==x){
                count++;
            }
        } 
    } 
    cout<<count;   
return 0;
}