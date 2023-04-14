#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int N = 1e5 + 10;
    vector<int> freq(N, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int q;
    cout << "Enter queries:";
    cin >> q;
    while (q--)
    {
        int queryelement;
        cin >> queryelement;
        cout << freq[queryelement];
    }

    return 0;
}