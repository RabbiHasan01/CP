
//Linear search
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n,k;
	cin>>n>>k;
	int a[n+5];
	bool c=true;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		if(a[i]==k){
			cout << "Position "<< i<<endl;
			c=false;
			break;
		}
	}
	if(c) cout << "Not exist in the array\n";
}




