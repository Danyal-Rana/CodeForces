#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X=0;
    int n;
    cin>>n;
    
    string s;
    
    while (n>0)
    {
        cin>>s;
        
        if (s=="X++" || s=="++X")
        {
            X++;
        }
        else
        {
            X--;
        }
        n--;
    }
    cout<<X;
}