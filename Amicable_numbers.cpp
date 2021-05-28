#include <iostream>
#include <cmath>
using namespace std;

int proper_sum(int n){
	int i,sum=1;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0)
			sum+=i+n/i;
	}
	return sum;
}

int main(){
	long long unsigned int gin=1;
	int i,k,ginl,tot=0;
	for(i=1; i<=100; i++){
		k=i;
		if(k%10==0)
			k/=10;
		else if(k%10==4||k%10==5){
			ginl*=k;
			tot++;
		}
		if((k%10!=4)&&(k%10!=5))
			gin*=k;
		else if(tot==2)
			gin*=ginl/10;
		if(tot==2){
			ginl=1;
			tot=0;
		}			
	}
	cout<<gin<<endl;
	return 0;						
		
}

