//NOW when you know no can you try to check weather a number is a palindrome or not?
using namespace std;
int main()
{
	int n,num ,digit ,rev=0;
	cout<<"enter a positive number:";
	cin>>num;
	n=num ;
	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	while(num!=0);
	cout<<"enter the reverse of the number is :"<<endl;
	if (n==rev)
	cout<<"the number is a palindrome ";
	else
	cout<<"the number is a palindrome ";
	return 0;
}
