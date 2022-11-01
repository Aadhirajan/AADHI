#include<iostream>
using namespace std;
int main()
{
	long int len,wid,area;
	float a,b;
	cout<<"enter the length of the field(feet):  ";
	cin>>len;
	cout<<"enter the width of the field(feet):   ";
	cin>>wid;
	area=len*wid;
	cout<<"the area of the field in feet:  "<<area<<"ft(square)"<<endl;
	a=area*929.0304;
	cout<<"the area of the field in cm(square): "<<a<<endl;
	b=a/900;
	cout<<"number of hills: "<<b<<endl;
	
	
}