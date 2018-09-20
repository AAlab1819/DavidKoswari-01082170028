#include <iostream>

using namespace std;

int main()
{
    int k, l, m, n, d;
    int dmg=0;
    cin>>k>>l>>m>>n>>d;

    for(int i=0;i<d;i++)
    {
        if(i%k == 0)
            {
                dmg++;
            }
        else if(i%l == 0)
            {
                dmg++;
            }
        else if(i%m == 0)
            {
                dmg++;
            }
        else if (i%n == 0)
            {
                dmg++;
            }
    }
    cout<<" "<<dmg;
    return 0;
}
