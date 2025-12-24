#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    //second largest element
    int f=INT_MIN,s=INT_MIN;
    for(int num:arr)
    {
        if(num>f){
            s=f;
            f=num;
        }
        else if(num>s && num!=f)
        s=num;
    }
    cout<<"Second largest element is "<<(s==INT_MIN)?-1:s;
    return 0;
}
