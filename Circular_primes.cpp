#include <iostream>
#include <cmath>
using namespace std;

int tot_dig(int n);
bool is_prime(int n);
bool all_rot_prime(int n,int tot);

int main(){
	int i,tot,sum=1;
	bool cp;
	for(i=3; i<1000000; i++){
		tot=tot_dig(i);
		if(is_prime(i))
			if(all_rot_prime(i,tot))
				sum++;
	}
	cout<<sum<<endl;
	return 0;	
}
int tot_dig(int n){
	int i=0; 
	while(n!=0){
		n/=10;
		i++;
	}
	return i;
}
bool is_prime(int n){
	int i;
	for(i=2; i<sqrt(n)+1; i++)
		if(n%i==0)
			return false;
	return true;		
}
bool all_rot_prime(int n,int tot){
	int i,k,m,p;
	p=pow(10,tot-1);
	for(i=0; i<tot; i++){
		k=n/p;
		m=n-k*p;
		n=m*10+k;
		if(!is_prime(n))
			return false;
	}
	return true;
}
