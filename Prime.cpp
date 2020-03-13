// www.spoj.comproblemsPRIME1

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{	

	for(int i = 2;i<=sqrt(n);i++)
	{
		if(n%i==0)
				return false;
	}
			return true;
}
int main() {
	int n;
	cin>>n;
	while(n--){
	int s,e;
	cin>>s>>e;
	if(s<2)
		s=2;
		for(int i=s;i<=e;i++){
			if(isPrime(i))
				cout<<i<<endl;
		}
	cout<<endl;
	}
	// your code goes here
	return 0;
}