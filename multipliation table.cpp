#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Number To Find Multiplication table";
	cin>>num;
	for(int a=1;a<=20;a++)
	{
		cout<<a<<"*"<<num<<"="<<num*a<<endl;
	}
	return 0;
}