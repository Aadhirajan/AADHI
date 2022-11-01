#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	std::string c;
	cout<<"num of times  ";
	cin>>b;
	a=0;
	cout<<"enter a word to repeat  ";
	cin>>c;
	while(a<b)
	{
		cout<<c<<endl;
		a++;
	}
}