#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n;
    cin >> n;

    int myCounter = 0;

    while (n != 0)
    {
        if (n%10==4 || n%10==7)
        {
            myCounter++;
        }

        n /= 10;
    }

    if (myCounter==4 || myCounter==7)
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";


    return 0;
}