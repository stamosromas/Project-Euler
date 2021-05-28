#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n){
	int i;
	for(i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return false;
	return true;		
}

int prev_prime(int n){
	int i;
	for(i=n-1; i>=2; i--)
		if(is_prime(i))
			return i;
}

int main(){
	int i,m;
	float k;
	for(i=5; i<10000000; i++){
		if(!is_prime(i)){
			k=sqrt((i-prev_prime(i))/2);
			m=k;
			if((k-m)!=0)
				break;
		}
		
			
	}
	cout<<i<<endl;
	return 0;
}
