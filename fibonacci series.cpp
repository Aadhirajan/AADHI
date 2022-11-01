#include<iostream>
using namespace std;
int main()
{
	int n,i,a=0,b=1,c;
	cout<<"Enter number of terms"<<endl;
	cin>>n;
	cout<<"Fibonacci series"<<endl;
	cout<<a<<"\t"<<b;
	for(i=3;i<=n;i++)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}
	return 0;
	
}