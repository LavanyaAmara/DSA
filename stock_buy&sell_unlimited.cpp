#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    int pro=0;
for(int i=1;i<n;i++)
{
    if(arr[i]>arr[i-1])
    pro+=arr[i]-arr[i-1];
}
cout<<"Profit : "<<pro<<endl;
return 0;
}
