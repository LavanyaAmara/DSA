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

    int c1 = 0,c2=0,e2=0, e1 = 0;
    for (int num : arr)
    {
        if (num == e1)
        {
            c1++;
        }
       else if (num == e2)
        {
            c2++;
        }
        else if (c1 == 0)
        {
            e1 = num;
            c1 = 1;
        }
        else if (c2 == 0)
        {
            e2 = num;
            c2 = 1;
        }
        else
        {
            c1--;
            c2--;
        }
    }

    c1 = 0,c2=0;
    for (int num : arr)
    {
        if (num == e1)
            c1++;
             if (num == e2)
            c2++;
    }

   bool found = false;

if (c1 > n / 3)
{
    cout << "Majority element-1 is " << e1 << endl;
    found = true;
}
if (c2 > n / 3 && e2 != e1)
{
    cout << "Majority element-2 is " << e2 << endl;
    found = true;
}
if (!found)
    cout << "No majority element found";

    return 0;
}
