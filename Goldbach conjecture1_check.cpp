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

bool clear_square(int n){
	float f;
	f=sqrt(n);
	if(f-int(f)==0)
		return true;
	else
		return false;	
}

int main(){
	int n=5777,j;
	bool found=false;
	for(j=n-2; j>=3; j-=2){
		if(is_prime(j)&&(clear_square((n-j)/2)))
			found=true;
	} 
	if(found==false)
		cout<<"Not found.";
	else
		cout<<"Found.";	
	
}
