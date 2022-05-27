

//a2=b2+c2
#include <iostream>
#include <math.h>
using namespace std;
int pythogorean_triplets(int x,int y,int z){
	
	int a=max(x,max(y,z));
	int b,c;
	if(a==x){
		a=x;b=y,c=z;
	}else if(a==y){
		a=y,b=x,c=z;
	}else {
		a=z,b=x,c=y;
	}
	if(pow(a,2)==(pow(b,2)+pow(c,2))){
		return true;
	}else return false;


}

int main(int argc, char *argv[])
{
	int x,y,z;
	cin>>x>>y>>z;
	if(pythogorean_triplets(x,y,z)){
		cout <<"Pythogorean triplets\n";
	}else {
		cout <<"Not pythogorean triplets\n";
	}
//	cout <<pythogorean_triplets(x,y,z)?"pythogorean triplets\n" :"pythogorean triplets\n";
}



