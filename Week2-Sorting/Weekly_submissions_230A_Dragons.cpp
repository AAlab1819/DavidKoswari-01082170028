#include <iostream>

using namespace std;

void insertionSort(long long arr1[], long long arr2[], long long amount)
{
      long long a;
      long long b;
      long long c;
      long long pass;
            for (a=1; a<amount; ++)
            {
                pass=arr1[a];
                c=arr2[a];
                b=a-1;
                while(b>=0&&arr1[b]>pass)
                {
                    arr1[b+1]=arr1[b];
                    arr2[b+1]=arr2[b];
                    b=b-1;
                }
                arr1[b+1]=pass;
                arr2[b+1]=c;
            }
}


int main()
{
    long long x; // x = kirito strength
    long long n; // n = number of dragon
    cin>>x>>n;
    long long d[n], e[n]; // d = dragon strength, e = bonus strength or exp from d

    for(int i=0;i<x;i++)
    {
        cin>>d[i]>>e[i];
    }

    insertionSort(d,x,n);


    for(int i=0;i<n;i++)
    {
        if(x>d[i])
        {
            x+=e[i];
        }
        else if(x<d[i])
        {
            x = x;
            cout<<"NO";
        }
        if (i == n-1)
        {
            cout<<"YES";
        }
    }
    return 0;
}
