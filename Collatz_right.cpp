#include <iostream>
#include <cmath>
using namespace std;

int sum_of_divisors(int n){
	int i,tot=1;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0){
			if(n/i==i)
				tot+=i;
			else
				tot+=i+n/i;	
		}
	return tot;		
}

/*int find_type_of_num(int n){
	int tot=0;
	tot=sum_of_divisors(n);
	if(tot>n)
		return 1;
	else if(tot==n)
		return 0;
	else
		return -1;	
}*/

int main(){
	cout<<sum_of_divisors(4);
}







