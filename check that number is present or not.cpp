Q#3//write a program to check that the number is present or not?
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int c;
	cout<<"enter five values"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values are";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"choose no to identitfy array";
	cin>>c;
	bool flag;
	for(int i=0;i<5;i++)
	{
		if(c==arr[i])
		flag++;
		if(flag==1)
		cout<<"values found";
		else
		{
			cout<<"values are not found ";
		}
	}
	return 0;
}

