#include <iostream>
using namespace std;
bool isprime(int num)
{
	for(int test=2;test<num;test++)
	{
		if(num%test==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	//int num = 2;
	int primeto;
	cout<<"what is the number you all the previous primes ";
	cin>>primeto;
	for(int num=2;num<primeto;num++)
	{
		isprime(num);
		if(isprime(num)== true)
		{
		cout<<num<<endl;
		}
	
	}
}
