#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    char l[n][m];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin>>l[i][j];
        }
        if (l[i][j] == '*')
            {
             l[i][j] == 1;
            }
        else if (l[i][j] == '.')
            {
             l[i][j] == 0;
            }
    }
    for (int i=0; i<k; i++)
    {
        cin>>x>>y;
    }

    return 0;
}
