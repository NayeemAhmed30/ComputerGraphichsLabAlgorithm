
#include <iostream>
using namespace std;

int main()
{
    float x,y,r;
    int p;

    cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the value of y: ";
	cin>>y;
    cout<<"Enter radius: ";
    cin>>r;
    p=1-r;
    while((x<y)){
        if(p<0){
          x=x+1;
          y=y;
            cout<<x<<" "<<y<<"\n";
            p=p+(2*x)+1;
            }

            else{
            x=x+1;
            y=y-1;
            cout<<x<<" "<<y<<"\n";
            p=p+(2*x)+1-(2*y);
            }
        }
}
