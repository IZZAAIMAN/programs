Q#12//write a program to count odd and even integer in seperate arrays? 
#include<iostream >
using namespace std;
 int main ()
 {
 	int arr[10],even=0,odd,i;
 	cout<<"enter 10 array elements :";
 	for(i=0;i<10;i++)
 	cin>>arr[i];
 	for(i=0;i<10;i++)
 	{
 		if (arr[i]%2==0)
 		even++;
 		else
 		odd++;
	 }
	 cout<<"\n total number of even numbers="<<even<<endl;
	 cout<<"\n total number of odd number ="<<odd<<endl;
	 return 0;
 }
