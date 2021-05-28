#include <iostream>
#include <cmath>
using namespace std;

int sum_of_divisors(int n){
	int i,sum=1;
	for(i=2; i<=sqrt(n); i++)
		if(n%i==0){
			if(n/i==i)
				sum+=i;
			else
				sum+=i+n/i;	
		}
	return  sum;	
}

int find_type(int n){
	int sum;
	sum=sum_of_divisors(n);
	if(sum>n)
		return 1;
	else if(sum==n)	
		return 0;
	else
		return -1;	
}

int main(){
	int n;
	cin>>n;
	if(find_type(n)==0)
		cout<<"Perfect number.";
	else if(find_type(n)==1)
		cout<<"Abundant.";
	else
		cout<<"Deficient.";		
	return 0;
}

