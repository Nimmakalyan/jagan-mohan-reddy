# include<iostream>
using namespace std;
int main()
{
int number, reverse=0,rem;
cout<<"enter a number: ";
cin>>number;
	while(number!=0)
	{
		rem=number%10;
		reverse=reverse*10+rem;
		number/=10;
	}
	cout<<"reversed number:"<<reverse<<endl;
	return 0;
}
