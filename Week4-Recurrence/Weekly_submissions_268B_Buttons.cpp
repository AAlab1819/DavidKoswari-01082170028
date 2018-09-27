#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin>>x;
    y = x;
        for(int i=1; i<=x; i++)
        {
            y+=i*(x-i);
        }
    return 0;
}
