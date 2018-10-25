#include <iostream>
using namespace std;

int main()
{
    int num;
    int input;
    int p1 = 0;
    int p2 = 0;

    cin >> num;

    for (int a = 0; a < num; a++)
    {
        cin >> input;

        if (input < 0)
        {
            p2 += input;
        }

        else
        {
            p1 += input;
        }
    }

    cout << p1 - p2;
    return 0;
}

//source code: HerbieSinadia-01082170022
