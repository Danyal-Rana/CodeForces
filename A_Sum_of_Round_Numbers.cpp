#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    int arr[t];

    for (int i=0; i<t; i++)
    {
        cin>>arr[i];
    }

    for (int i=0; i<t; i++)
    {
        int count = 0;
        vector<int> rounds;
        int n = arr[i];

        while (n > 0)
        {
            if (n%10 == 0)
            {
                count++;
                n /= 10;
            }
            else
            {
                rounds.push_back ((n%10) * pow(10, count));
                count++;
                n /= 10;
            }
        }

        cout << rounds.size() << endl;

        for (int i=0; i<rounds.size(); i++)
        {
            cout << rounds[i] << " ";
        }
    }

    return 0;
}