#include<iostream>
using namespace std;
int main(){
	
	int s1,s2,s3,s4,s5,s6;
	cout<<" A = ";
	cin>>s1;
	cout<<" B = ";
	cin>>s2;
	cout<<" C = ";
	cin>>s3;
	cout<<" D = ";
	cin>>s4;
	cout<<" E = ";
	cin>>s5;
	cout<<" F = ";
	cin>>s6;
	if (s1>s2 && s1>s3 && s1>s4 && s1>s5 && s1>s6)
	cout<<"A has highest average "<<"= "<<s1<<endl;
	else if (s2>s1 && s2>s3 && s2>s4 && s2>s5 && s2>s6)
	cout<<"B has highest average "<<"= "<<s2<<endl;
	else if (s3>s1 && s3>s2 && s3>s4 && s3>s5 && s3>s6)
	cout<<"C has highest average "<<"= "<<s3<<endl;
	else if (s4>s1 && s4>s2 && s4>s3 && s4>s5 && s4>s6)
	cout<<"D has highest average "<<"= "<<s4<<endl;
	else if (s5>s1 && s5>s2 && s5 > s3 && s5>s4 && s5>s6)
	cout<<"E has highest average "<<"= "<<s5<<endl;
	else if (s6>s1 && s6>s2 && s6>s3 && s6>s4 && s6>s5)
	cout<<"F has highest average "<<"= "<<s6<<endl;
	else 
	cout<<"ALL ARE EQUAL "<<endl;
	

	return 0;
}