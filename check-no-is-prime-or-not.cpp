#include<iostream>
using namespace std;
int main(){
	
	int n1;
	cout<<"Enter number to check whether it is prime or not = ";
	cin>>n1;
	if (n1==2 || n1==3 || n1==5 || n1==7 || n1==11 || n1==13 || n1==17 || n1==19
	 || n1==23 || n1==29 || n1==31)
	cout<<"Prime  numbers "<<endl;
	else if (n1%2==0 || n1%3==0 || n1%5==0 || n1%7==0 || n1%11==0 || n1%13==0 || n1%17==0 || n1%19==0
	 || n1%23==0 || n1%29==0 || n1%31==0)
	 cout<<"Not a prime number "<<endl;
	 
	else if (n1>1000)
	cout<<"ERROR! write less than 1000"<<endl;
	else if (n1<0)
	cout<<"NON-NEGATIVE NO "<<endl;
	else 
	 cout<<"Not a prime number "<<endl;
	
	return 0;
}