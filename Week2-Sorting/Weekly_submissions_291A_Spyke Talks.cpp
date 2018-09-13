#include <iostream>

using namespace std;

void bubbleSort(long long arr[], long long a)
{
      bool swapped = true;

      int b = 0;
      int tmp;
      while (swapped)
        {
            swapped = false;
            b++;

            for (int i = 0; i < a - b; i++)
                {
                  if (arr[i] > arr[i + 1])
                    {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;

                        swapped = true;
                  }
            }
      }
}

int main()
{
    long long x; //x = n secretary
    int z=0;
    cin>>x;

    long long y[x]; // y[x] = n secretary in the corporation
    for(int i=0;i<x;i++)
    {
        cin>>y[i];
    }

    bubbleSort(y,x);

    for(int i=0;i<x;i++)
    {
        if(y[i]==y[i+1] && y[i]!=y[i+2] && y[i]!=0)
        {
            z++;
            i++;
        }
        else if(y[i]==y[i+1] && y[i]==y[i+2] && y[i]!=0)
        {
            z = -1;
            break;
        }
    }

    cout<<z;
    return 0;
}
