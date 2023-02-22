//try to swap two number with third variable ?
#include<iostream >
using namespace std;
int main()
{
	int a=5,b=10, temp;
	cout<<"before swaping ."<<endl;
	cout<<"a="<<a<<",b"<<b<<endl;
	temp=a ;
	a=b;
	b=temp;
	cout<<"\nafter swaping ."<<endl;
	cout<<"a="<<a<<",b"<<b<<endl;
	return 0;
}
