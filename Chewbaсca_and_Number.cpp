#include<bits/stdc++.h>
using namespace std;

int main () {

    string s;
    cin >> s;

    int firstDigit = s[0]-'0';
    if (firstDigit<9 and firstDigit>4)
    {
        s[0] = ((9-firstDigit)+'0');
    }

    for (int i=1; i<s.size(); i++)
    {
        int curDigit = s[i]-'0';

        if (curDigit>4)
        {
            s[i] = ((9-curDigit)+'0');
        }
    }

    cout << s;

    return 0;
}