
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
	while(1){
	int n;
	cin>>n;
	bool c=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout << "Non-prime" <<endl;
			c=0;
			break;
		}
	}
	if(c) cout <<"Prime" <<endl;
	}
}