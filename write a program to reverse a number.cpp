//write a program to reverse a number?
#include<iostream>
using namespace std;
int main ()
{
	int num ,rev=0,rem;
	cout<<"enter the number ";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rem+(rev*10);
		num=num/10;
	}
	cout<<"\nreverse ="<<rev;
	cout<<endl;
	return 0;
}
