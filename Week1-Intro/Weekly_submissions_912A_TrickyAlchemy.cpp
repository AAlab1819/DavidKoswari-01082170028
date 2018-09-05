#include <iostream>

using namespace std;

int main()
{
    int bC, yC;
    //bC = blue crystal, yC = yellow crystal
    cin>>yC;
    cin>>bC;
    int bB, gB, yB;
    //bB = blue ball, gB = green ball, yB = yellow ball
    cin>>yB;
    cin>>gB;
    cin>>bB;
    yC=yC-yB*2-gB;
    bC=bC-bB*3-gB;
    int tR=0;
    //tR = ans
    if(bC<0)
        tR+=bC*-1;
    if(yC<0)
        tR+=yC*-1;
    cout<<" "<<tR;
    return 0;
}

