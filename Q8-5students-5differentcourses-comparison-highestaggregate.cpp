//program of 5 different students marks on the basis of different 5 
//courses for each  
#include<iostream>
using namespace std;
int main(){
	
	int c1s1,c2s1,c3s1,c4s1,c5s1,st1,st2,st3,st4,st5;
	int c1s2,c2s2,c3s2,c4s2,c5s2;
	int c1s3,c2s3,c3s3,c4s3,c5s3;
	int c1s4,c2s4,c3s4,c4s4,c5s4;
	int c1s5,c2s5,c3s5,c4s5,c5s5;
	int ag1,ag2,ag3,ag4,ag5;
	cout<<"Enter student roll no = ";
	cin>>st1;
	
	cout<<"Enter marks of 5 courses ="<<endl;
	cin>>c1s1>>c2s1>>c3s1>>c4s1>>c5s1;
			 	ag1=c1s1+c2s1+c3s1+c4s1+c5s1;

	cout<<"Enter 2nd student roll no ="<<endl;
	cin>>st2;
	cout<<"Enter 5 courses marks "<<endl;
	cin>>c1s2>>c2s2>>c3s2>>c4s2>>c5s2;
				ag2= c1s2 + c2s2 +c3s2 +c4s2 +c5s2;

		cout<<"Enter 3rd student roll no ="<<endl;
	cin>>st3;
	cout<<"Enter courses marks "<<endl;
	cin>>c1s3>>c2s3>>c3s3>>c4s3>>c5s3;
		 	 ag3= c1s3 + c2s3 +c3s3 +c4s3 +c5s3;

		cout<<"Enter 4th student roll no ="<<endl;
	cin>>st4;
	cout<<"Enter 5 courses marks "<<endl;
	cin>>c1s4>>c2s4>>c3s4>>c4s4>>c5s4;
			 ag4= c1s4 + c2s4 +c3s4 +c4s4 +c5s4;

		cout<<"Enter 5th student roll no ="<<endl;
	cin>>st5;
	cout<<"Enter 5 courses marks "<<endl;
	cin>>c1s5>>c2s5>>c3s5>>c4s5>>c5s5;
			 ag5= c1s5 + c2s5 +c3s5 +c4s5 +c5s5;

		 
		 if(ag1 >ag2 && ag1>ag3 && ag1>ag4 && ag1>ag5) {

		 cout<<st1<<" has highest aggregate of "<<"= "<<ag1<<endl;
	}
	else if(ag2 >ag1 && ag2>ag3 && ag2>ag4 && ag2>ag5){

		 cout<<st2<<" has highest aggregate of "<<"= "<<ag2<<endl;
	}
	 else if(ag3 >ag1 && ag3>ag2 && ag3>ag4 && ag3>ag5){

		 cout<<st3<<" has highest aggregate of "<<"= "<<ag3<<endl;
	}
	else if(ag4 >ag2 && ag4>ag3 && ag4>ag1 && ag4>ag5){

		 cout<<st4<<" has highest aggregate of "<<"= "<<ag4<<endl;
	}
	else if(ag5>ag2 && ag5>ag3 && ag5>ag4 && ag5>ag1)
	{

		 cout<<st5<<" has highest aggregate of "<<"= "<<ag5<<endl;
	}
	
	else {
	
	cout<<"WRONG INPUT"<<endl;
}
	
	
	

	
	
	return 0;
}