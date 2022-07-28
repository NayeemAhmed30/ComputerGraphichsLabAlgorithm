
#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;

int main()
{
    float x1,x2 ,y1,y2,dx,dy,d0,d,i=0,y;

    cout<<"Enter the value of x1 and y1: ";
    cin>>x1>>y1;
    cout<<"Enter the value of x2 and y2: ";
    cin>>x2>>y2;

    dx = x2-x1;
    dy = y2-y1;
    d0 = 2*dy - dx;
    cout<<"dx:"<<dx<<"\n";
    cout<<"dy:"<<dy<<"\n";
    d = d0;
    y = y1+1;
    cout<<"i:"<<i<<" d0: "<<d0<<"   x: "<<x1+1<<", y: "<<y<<"\n";
    for(int j=x1+2;j<=x2;j++){
        i++;
        if(d>0){
            d = d + 2*dy - 2*dx;
            if(d>0){
                y++;
            }
            cout<<"i:"<<i<<" d"<<i<<":"<<d<<"   x: "<<j<<", y: "<< y<<"\n";
        }else{
            d = d + 2*dy;
            if(d>0){
                y++;
            }
            cout<<"i:"<<i<<" d"<<i<<":"<<d<<"   x: "<<j<<", y: "<<y<<"\n";
        }

    }
}
