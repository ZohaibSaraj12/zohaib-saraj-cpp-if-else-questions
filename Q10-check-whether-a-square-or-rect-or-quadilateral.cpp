//program to check whether a square, rectangle or a quadilateral by its points containing coordinates 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	int x1,y1;
	int x2,y2;
	int x3,y3;
	int x4,y4;
	cout<<"Enter coordinates for P1 = "<<endl;
	cin>>x1>>y1;
	cout<<"P1("<<x1<<"," <<y1<<")" <<endl;
	cout<<"Enter coordinates of P2 = "<<endl;
	cin>>x2>>y2;
	cout<<"P2(" <<x2<<","<<y2<< ")"<<endl;
		cout<<"Enter coordinates of P2 = "<<endl;
	cin>>x3>>y3;
	cout<<"P3(" <<x3<<","<<y3<< ")"<<endl;
		cout<<"Enter coordinates of P2 = "<<endl;
	cin>>x4>>y4;
	cout<<"P4(" <<x4<<","<<y4<< ")"<<endl;

   int AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    int BC =sqrt (pow(x3 - x2, 2) + pow(y3 - y2, 2));
    int AD = sqrt (pow(x4 - x1, 2) + pow(y4 - y1, 2));
    int DC= sqrt (pow(x3 - x4, 2) + pow(y3 - y4, 2));
 if (AB==BC && BC == AD && AD==DC)
 cout<<"Square ";
 else if (AB == AD)
 cout<<" Rectangle "<<endl;
 else 
 cout<<"Quadilateral "<<endl;
   
   
   
		    return 0;
		    
}
