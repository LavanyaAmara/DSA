#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    vector<int> arr;
    int x;
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
   //rotate an array by k steps
   cout<<"Enter k : ";
   int k;
   cin>>k;
     k=k%n;
reverse(arr.begin(), arr.begin() + k);
reverse(arr.begin() + k, arr.end());
reverse(arr.begin(), arr.end());

   //print new array
   cout<<"New array: ";
   for(int num:arr)
   {
       cout<<num<<" ";
   }
    return 0;
}
