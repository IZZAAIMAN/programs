//can you check wheather a number is prime or not?
#include<iostream>
using namespace std;
int main()
{
	int no,i ,chk=0 ,n;
	cout<<" enter a positive integer: ";
	cin>>no;
	for( i=2; i<=n; i++)
	{
		if(n%i==0)
		{
			chk++;
			break;
		}
	}
	if(chk==0) 
	cout<<"\n itis a prime number ";
	else
	cout<<"\n is not a prime number";
	cout<<endl;
	return 0;
	}
