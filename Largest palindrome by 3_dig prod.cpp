#include  <iostream>
#include <cstdlib>
using namespace std;

bool is_pali(int n){
	int num,dig,rev=0;
	num=n;
	do{
		dig=num%10;
		rev=rev*10+dig;
		num/=10;
	}while(num!=0);
	if(rev==n)
		return true;
	else 
		return false;	
}

int main(){
	int i,j,imax,jmax,pmax,n;
	pmax=0;
	for(i=100; i<=999; i++)
		for(j=100; j<999; j++){
			n=i*j;
			if(is_pali(n))
				if(n>pmax){
					imax=i;
					jmax=j;
					pmax=n;
				}	
		}
	cout<<imax<<" "<<jmax<<endl;
	return 0;
}
