                                  //Written by ZOHAIB SARAJ

// making a simple calculator using simple operation as a character in c++
#include<iostream>
using namespace std;
int main(){
	char op;
	int n1;
	int n2;
	cout<<"Enter 1st no = ";
	cin>>n1;
	cout<<"Enter 2nd no = ";
	cin>>n2;
	cout<<"Enter + for sum "<<endl;
	cout<<"Enter - for difference "<<endl;
	cout<<"Enter * for multiplication "<<endl;
	cout<<"Enter / for quotient "<<endl;
	cout<<"Enter % for remainder "<<endl;
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"Sum is = "<<n1+n2;
			break;
		case '-':
			cout<<"Difference is = "<<n1-n2;
			break;
		case '*':
			cout<<"Multiplication is = "<<n1*n2;
			break;
		case '/':
			cout<<"Quotient is = "<<n1/n2;
			break;
		case '%':
			cout<<"Remainder is = "<<n1%n2;
            default :
            cout<<"ERROR";
            break;
		}
	
	
	
	
	
	
	
	return 0;
}
