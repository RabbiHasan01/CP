
//The summation of cube of digits in n is equal to n.
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	while(1){
		int n;
		cin>>n;
		int x=n,rem,ans=0;
		while(n>0){
			rem=n%10;
			n/=10;
			ans+=pow(rem,3);
		}
		if(ans==x) cout << "Armstrong Number\n";
		else cout <<"Non Armstrong Number\n";
	}
}



