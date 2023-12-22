//checking between them  a 2nd maximum 
#include<iostream>
using namespace std;
int main(){
	
	int n1,n2,n3;
	cout<<"Enter 1st NO = ";
	cin>>n1;
	cout<<"Enter 2nd NO = ";
	cin>>n2;
	cout<<"Enter 3rd NO = ";
	cin>>n3;
	if (n1<n2 && n1>n3 || n1>n2 && n1<n3)
	cout<<"1ST no which is "<<n1<<" is 2ND maximum "<<endl;
	else if (n2<n1 && n2>n3 || n2>n1 && n2<n3)
	cout<<"2ND no which is "<<n2<<" is 2ND maximum "<<endl;
	else if (n3>n1 && n3<n2 || n3<n1 && n3>n2 )
	cout<<"3RD no which is "<<n3<<" is 2ND maximum "<<endl;
	else if (n1==n2 && n2==n3)
	cout<<"THREE NO's are equal"<<endl;
	else 
	cout<<"TWO NO's are equal and ONE is different between them "<<endl;
	
	
	
	
	return 0;
}