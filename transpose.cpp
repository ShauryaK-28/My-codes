#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int A[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> A[i][j]; // inputing the array to be transposed
        }
    }
    int Transpose[y][x];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            Transpose[i][j]=A[j][i];
        }
        
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout<<Transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}