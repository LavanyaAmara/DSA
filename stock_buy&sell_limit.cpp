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
    int minn=INT_MAX,maxpro=0;
for(int num:arr)
{
    minn=min(num,minn);
    maxpro=max(maxpro,num-minn);
}
cout<<"Profit : "<<maxpro<<endl;
return 0;
}
