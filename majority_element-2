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

    int c1 = 0, e1 = 0;
    for (int num : arr)
    {
        if (num == e1)
        {
            c1++;
        }
        else if (c1 == 0)
        {
            e1 = num;
            c1 = 1;
        }
        else
        {
            c1--;
        }
    }

    c1 = 0;
    for (int num : arr)
    {
        if (num == e1)
            c1++;
    }

    if (c1 > n / 2)
        cout << "Majority element is " << e1;
    else
        cout << "No majority element found";

    return 0;
}
