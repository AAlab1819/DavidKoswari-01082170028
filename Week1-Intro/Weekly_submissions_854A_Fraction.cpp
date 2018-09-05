#include <iostream>

using namespace std;

int main()
{
    int n;
    int w = 100; //w = a
    int v = 100; //v = b
    cin>>n;

    if (n%2 == 0)
    {
        w = (n/2)-1;
        v = (n/2)+1;
        if (w%2 == 0)
        {
            w-=1;
        }
        if (v%2 == 0)
        {
            v+=1;
        }
    }
    else
    {
        w=(n/2);
        v=w+1;
    }
    cout<< w <<" "<< v;
    return 0;
}

