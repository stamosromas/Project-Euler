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

int main(){
	float f;
	int k,m,i,j;
	bool found;
	for(i=9; i<=1000001; i+=2){
		if(!is_prime(i)){
		found=false;
		for(j=i-2; j>=3; j-=2){
			if(is_prime(j)){
				f=sqrt((i-j)/2);
				k=f;
				if(k==f){
					found=true;
					break;
				}
			}
		}
		if(found==false){
			m=i;
			break;
		}
		}	
	}
	cout<<m<<endl;
	return 0;
}
