#include<iostream>
using namespace std;
int main()
{
	float gross,basic,da,hra;
	cout<<"Enter basic salary of an employee: ";
	cin>>basic;
	if(basic<20000)
	{
		da=basic*80/100;
		hra=basic*20/100;
	}
	else if(basic>=20000&&basic<40000)
	{
		da=basic*90/100;
		hra=basic*25/100;
	}
	else if(basic>=40000)
	{
		da=basic*95/100;
		hra=basic*30/100;
	}
	gross=basic+hra+da;
	cout<<"\n\t Basic salary             :"<<basic<<endl;
	cout<<"\t Dearness allowance       :"<<da<<endl;
	cout<<"\t House rent allowance     :"<<hra<<endl;
	cout<<"\t---------------------------------"<<endl;
	cout<<"\t Gross salary             :"<<gross<<endl;
	cout<<"\t---------------------------------"<<endl;
	return 0;
	}