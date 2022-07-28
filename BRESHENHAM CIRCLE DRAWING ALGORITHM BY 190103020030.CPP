#include <iostream>
using namespace std;
int x,y,r;
int main(){


    cout<<"Enter the value of x and y: \n";
	cin>>x>>y;
	cout<<"Enter the value of radius: ";
	cin>>r;
	int x=0;
	int y=r;
	float p = 3-(2*r);
	while (y > x)
	{
		if(p <= 0)
		{
			p = p+(4*x)+6;
		}
		else
		{
			p = p+(4*x)-(4*y)+10;
			y = y-1;
		}
		x++;
		cout<<x<<" "<<y<<"\n";
	}
}
