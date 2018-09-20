#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin>>p;
    int x[p];

    for(int i=0; i<p; i++)
    {
        cin>>x[i];
    }

    int q;
    cin>>q;
    int y[q];

    for(int i=0; i<q; i++)
    {
        cin>>y[i];
    }
    for(int i=0; i<p; i++)
        if(x[i]==1)
        {
         cout<<"I become the guy.";
        }
        else if(y[i]==0)
        {
         cout<<"Oh, my keyboard!";
        }

    return 0;
}
