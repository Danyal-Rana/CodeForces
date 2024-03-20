#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int myMatrix[5][5];
    int row = 0;
    int col = 0;

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cin >> myMatrix[i][j];
            if (myMatrix[i][j] == 1)
            {
                row = abs(2-i);
                col = abs(2-j);
                break;
            }
        }
    }

    cout << row+col;

    return 0;
}