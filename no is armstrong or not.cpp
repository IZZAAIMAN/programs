//check whether a number is armstrong or not?
#include<iostream>
using namespace std;
int main()
{
	int no ,temp ,rem,sum=0;
	cout<<" enter no to be checked";
	cin>>no;
	temp=no;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem *rem*rem;
		temp=temp/10;
	}
	if(sum==no)
	cout<<"\n"<<no<<"is  an arm strong";
	else
	cout<<"\n"<<no<<"is not armstrong ";
	return 0;
}
