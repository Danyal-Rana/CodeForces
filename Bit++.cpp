#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X=0;
    int n;
    cin>>n;
    
    string str;
    
    while (n>0)
    {
        cin>>str;
        
        if (str=="X++" || str=="++X")
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