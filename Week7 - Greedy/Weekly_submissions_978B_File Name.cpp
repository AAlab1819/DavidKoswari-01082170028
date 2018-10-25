#include <iostream>
using namespace std;

int main()
{
    int num;
    int name_check = 0;
    int sum = 0;

    cin >> num;
    char input[num];
    cin >> input;

    for (int b = 0; b < num; b++)
    {
        if (input[b] == 'x')
        {
            name_check++;
        }

        if (input[b] != 'x' && name_check >= 3)
        {
            sum += name_check - 2;
            name_check = 0;
        }

        if (input[b] != 'x' && name_check < 3)
        {
            name_check = 0;
        }
    }

    if (name_check >= 3)
    {
        sum += name_check -2;
    }

    cout << sum;
    return 0;
}

//source code: HerbieSinadia-01082170022
