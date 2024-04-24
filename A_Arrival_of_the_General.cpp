#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int maxValue = 0;
    int minValue = 110;

    int maxIndex = 0;
    int minIndex = 0;

    int n;
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        int temp;
        cin >> temp;

        if (temp > maxValue)
        {
            maxValue = temp;
            maxIndex = i;
        }
        if (temp <= minValue)
        {
            minValue = temp;
            minIndex = i;
        }
    }

    if (maxIndex > minIndex)
    {
        cout << (maxIndex-1)+(n-minIndex)-1;
    }
    else
    {
        cout << (maxIndex-1)+(n-minIndex);
    }


    return 0;
}