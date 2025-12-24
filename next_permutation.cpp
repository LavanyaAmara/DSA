#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int n,x;
    cout<<"Enter size of the array:";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
int pivot=-1;
for(int i=n-2;i>=0;i--)
{
    if(arr[i]<arr[i+1])
    {
        pivot=i;
        break;
    }
}
if(pivot==-1)
{
    reverse(arr.begin(),arr.end());
}
else
{
    for(int i=n-1;i>pivot;i--)
    {
        if(arr[i]>arr[pivot])
        {
            swap(arr[i],arr[pivot]);
            break;
        }
    }
    reverse(arr.begin()+pivot+1,arr.end());
}
for(int num:arr)
cout<<num<<" ";
cout<<endl;
    return 0;
}
