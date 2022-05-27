

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n,k;
	cin>>n>>k;
	int a[n+7];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int j=0,m=n,mid,c=true;
	for(int i=0;i<n;i++ ){
		mid=(j+m)/2;
		if(a[mid]<k){
			j=mid+1;
		}else if(a[mid]>k){
			m=mid-1;
		}else {
			cout << "Position " <<mid+1<<endl;
			c=false;
			break;
		}
		if(j>m) {
			break;
		}
	}
	if(c) cout <<"Not exist in this array\n";
}





