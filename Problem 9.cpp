#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n);

int main(){
	long long int n=600851475143,i;
	int k;
	for(i=sqrt(n)+1; i>2; i--)
		if(is_prime(i))
			if(n%i==0){
				k=i;
				break;
			}
	cout<<k<<endl;
	return 0;		
}
bool is_prime(int n){
	int i;
	for(i=2; i<sqrt(n)+1; i++)
		if(n%i==0)
			return false;
	return true;		
}
