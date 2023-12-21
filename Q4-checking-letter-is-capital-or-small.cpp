//Letters whether capital or small 
#include<iostream>
using namespace std;
int main(){
	
char alph;
cout<<"ENter alphabet = ";
cin>>alph;
if (alph>='A' && alph<='Z')
cout<<"Capital Letters "<<endl;
else if ( alph>='a' && alph<='z')
cout<<"Small Letters "<<endl;
	else 
	cout<<"Error"<<endl;
return 0;
}