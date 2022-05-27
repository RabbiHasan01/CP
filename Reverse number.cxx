
///1234-->4321
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	while(1){
		int n;
		cin>>n;
		int rem,ans=0;
		while(n>0){
			rem=n%10;//4,3,2,1
			n/=10;//123,12,1,0
			ans*=10;
			ans+=rem;//4,43,432,4321
		//	ans*=10;//40,430,4320,43210
		}
		cout <<"Reverse " <<ans <<endl;
		
	}
}




