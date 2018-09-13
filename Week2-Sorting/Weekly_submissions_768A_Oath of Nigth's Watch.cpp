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
    long long x; // x = stewards
    long long higher = 0;
    long long lower = 0;
    long long z=0;
    int lowerset = 0;

    cin>>x;

    long long y[x];
    for(int i=0;i<x;i++)
    {
        cin>>y[i];
    }

    bubbleSort(y,x);

    for(int i=0;i<x;i++)
    {
        if(y[i] > higher)
        {
            higher=y[i];
        }
        if(lowerset == 0)
        {
            lowerset = 1;
            lower=y[i];
        }
        if (lowerset == 1&&y[i] < lower)
        {
            lower = y[i];
        }
    }
    for(int i=0;i<x;i++)
    {
        if(y[i]<higher&&y[i]>lower)
        {
            z++;
        }
    }

    cout<<z;
    return 0;
}
