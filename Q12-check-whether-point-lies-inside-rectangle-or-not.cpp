// check whether point lies inside the rectangle or not 
#include <iostream>

using namespace std;

int main() {
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
		cout<<"Enter coordinates of P3 = "<<endl;
	cin>>x3>>y3;
	cout<<"P3(" <<x3<<","<<y3<< ")"<<endl;
		cout<<"Enter coordinates of P4  = "<<endl;
	cin>>x4>>y4;
	cout<<"P4(" <<x4<<","<<y4<< ")"<<endl;
cout<<"Enter coordinates of point to check wether it lies or not = "<<endl;
int x5,y5;
cin>>x5>>y5;
cout<<"P(" <<x5<<"," <<y5<<")"<<endl;
    // Check if point P lies inside the rectangle
  if (x5>=x1 && x5<=x3 && y5>=y1 && y5<=y3  )
    cout<<"The point lies inside the rectangle. "<<endl;
    else 
    cout<<"Point doesnot lies in a rectangle "<<endl;
    
    
    return 0;
}
