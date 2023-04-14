//rotate the given array
 #include <iostream>
 using namespace std;
 int main(){
     int size;
     int arr[size];
      int k;
     cin>>size;
     for (int i = 0; i < size; i++)
     {
         cin>>arr[i];
     }
     cin>>k;
     k= k%size;
     int ansarray[size];
     int j=0;
     for (int i = size-k; i < size; i++)
     {
         ansarray[j++]=arr[i];
     }
     for (int i = 0; i < size-k; i++)
     {
         ansarray[j++]=arr[i];
     }
     for (int i = 0; i < size; i++)
     {
         cout<<ansarray[i]<<" ";
     }

return 0;
}

// more optimised version
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main(){
//      vector<int> v={1,2,3,4,5};
//      int k=2;
//      k=k%v.size();
//      reverse(v.begin(),v.end());
//      // 5 4 3 2 1
//      reverse(v.begin(),v.end()+k);
//      // 4 5 3 2 1
//      reverse(v.begin()+k,v.end());
//      // 4 5 1 2 3
//      for (int i = 0; i < v.size(); i++)
//      {
//          cout<<v[i]<<" ";
//      }
//  return 0;
//  }