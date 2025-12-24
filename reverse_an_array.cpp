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
   //reverse an array
   for(int i=0;i<n/2;i++)
   {
       int temp=arr[i];
       arr[i]=arr[n-i-1];
       arr[n-i-1]=temp;
   }

   //print new array
   cout<<"New array: ";
   for(int num:arr)
   {
       cout<<num<<" ";
   }
    return 0;
}
