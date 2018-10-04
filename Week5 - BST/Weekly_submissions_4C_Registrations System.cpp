#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int x;
    cin>>x;
    string xy[32];
    for(int i=0; i<x;i++)
    {
        cin>>xy[i];
    }
    int y=0;
    for(int i=0;i<x;i++)
    {
        if(xy[i] == xy[i-(y+1)])
        {
            cout<<xy[i]<<1<<endl;
        }
        else
        {
            cout<< "OK" <<endl;
        }
    }
    return 0;
}
