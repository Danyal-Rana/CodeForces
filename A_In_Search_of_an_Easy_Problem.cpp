#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, opinion;
    cin >> n;

    while (n>0)
    {
        cin >> opinion;
        if (opinion == 1)
        {
            cout << "HARD";
            return 0;
        }
        n--;
    }

    cout << "EASY";


    return 0;
}