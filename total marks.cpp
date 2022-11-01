#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,sum,avg,num4,num5,num6,roll,ch;
	std::string name;
	
	cout<<"\n\n\t\tMENU\n1.calculate student mark\n2.exit"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>ch;
	switch(ch)
{
	case 1:
	cout<<"enter student name"<<endl;
	cin>>name;
	cout<<"student roll number"<<endl;
	cin>>roll;
	cout<<"enter tamil mark: "<<endl;
	cin>>num1;
	cout<<"enter english mark: "<<endl;
	cin>>num2;
	cout<<"enter physics mark: "<<endl;
	cin>>num3;
	cout<<"enter chemistry mark: "<<endl;
	cin>>num4;
	cout<<"enter computer science mark: "<<endl;
	cin>>num5;
	cout<<"enter maths mark: "<<endl;
	cin>>num6;
	sum=num1+num2+num3+num4+num5+num6;
	cout<<"your total mark is "<<sum<<endl;
	avg=sum/6;
	cout<<"the average is "<<avg<<endl;
	if(num1>=35&&num2>=35&&num3>=35&&num4>=35&&num5>=35&&num6>=35)
		cout<<"you have passed"<<endl;
	else
		cout<<"you have failed"<<endl;
	case 2: break;
	default:cout<<"Invalid choice";
}


	return 0;
}