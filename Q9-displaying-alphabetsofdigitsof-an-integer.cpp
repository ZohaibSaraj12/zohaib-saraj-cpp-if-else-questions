                        // Written by ZOHAIB SARAJ 
#include<iostream>
using namespace std;
int main(){
	
	
	int n1;
	cout<<"Enter a 6 digit number = ";
	cin>>n1;
	
	
	
			if (n1>=1000000){
		cout<<"Wrong Input! Enter 6 digit number ";
	}
	
else
	{
		
		int digit1=n1%10;
	n1=n1/10;
	int digit2=n1%10;
	n1=n1/10;
	int digit3=n1%10;
	n1=n1/10;
	int digit4=n1%10;
	n1=n1/10;
	int digit5=n1%10;
	n1=n1/10;
	int digit6=n1%10;
	n1=n1/10;
		
		
		
		
		
		
		if(digit6>0)
		
	    
		if(digit6==1)
		cout<<"One ";
		else if (digit6==2)
		cout<<" Two";
		else if (digit6==3)
		cout<<" Three";
		else if (digit6==4)
		cout<<" Four ";
		else if (digit6==5)
		cout<<" Five ";
		else if (digit6==6)
		cout<<" Six ";
		else if (digit6==7)
		cout<<" Seven";
		else if (digit6==8)
		cout<<" Eight ";
		else
		cout<<" Nine";
	
	if (digit5>0)
	
		 
		 if(digit5==1)
		cout<<" One ";
		else if (digit5==2)
		cout<<" Two";
		else if (digit5==3)
		cout<<" Three";
		else if (digit5==4)
		cout<<" Four ";
		else if (digit5==5)
		cout<<" Five ";
		else if (digit5==6)
		cout<<" Six ";
		else if (digit5==7)
		cout<<" Seven";
		else if (digit5==8)
		cout<<" Eight ";
		else
		cout<<" Nine";
	
	
	if (digit4>0)
	
		 if(digit4==1)
		cout<<" One ";
		else if (digit4==2)
		cout<<" Two";
		else if (digit4==3)
		cout<<" Three";
		else if (digit4==4)
		cout<<" Four ";
		else if (digit4==5)
		cout<<" Five ";
		else if (digit4==6)
		cout<<" Six ";
		else if (digit4==7)
		cout<<" Seven";
		else if (digit4==8)
		cout<<" Eight ";
		else
		cout<<" Nine";
	
	
	if (digit3>0)
	
		 if (digit3==0)
	    cout<<" Zero";
		else if(digit3==1)
		cout<<" One ";
		else if (digit3==2)
		cout<<" Two";
		else if (digit3==3)
		cout<<" Three";
		else if (digit3==4)
		cout<<" Four ";
		else if (digit3==5)
		cout<<" Five ";
		else if (digit3==6)
		cout<<" Six ";
		else if (digit3==7)
		cout<<" Seven";
		else if (digit3==8)
		cout<<" Eight ";
		else
		cout<<" Nine";
	

	if (digit2>0)
	
		 if(digit2==1)
		cout<<" One ";
		else if (digit2==2)
		cout<<" Two";
		else if (digit2==3)
		cout<<" Three";
		else if (digit2==4)
		cout<<" Four ";
		else if (digit2==5)
		cout<<" Five ";
		else if (digit2==6)
		cout<<" Six ";
		else if (digit2==7)
		cout<<" Seven";
		else if (digit2==8)
		cout<<" Eight ";
		else
		cout<<" Nine";
	
	
	if (digit1>0)
	
		if(digit1==1)
		cout<<" One ";
		else if (digit1==2)
		cout<<" Two";
		else if (digit1==3)
		cout<<" Three";
		else if (digit1==4)
		cout<<" Four ";
		else if (digit1==5)
		cout<<" Five ";
		else if (digit1==6)
		cout<<" Six ";
		else if (digit1==7)
		cout<<" Seven";
		else if (digit1==8)
		cout<<" Eight ";
		else
		cout<<" Nine";
	}


	
	return 0;
}
