                  //Written by ZOHAIB SARAJ

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
    // Chech point P lies in rectangle or not 
   // how we can know that P lies in rectangle 
  /*if a point that's coordinates are x and y we know that its x and y coordinate will greater from 
  origin or x1 and y1 respectively and less from x3 and y3 it will lie in rectangle
*/
  if (x5>=x1 && x5<=x3 && y5>=y1 && y5<=y3  || x5>=x2 && x5<=x4 && y5>=y2 && y5<=y4)
    cout<<"The point lies inside the rectangle. "<<endl;
    else 
    cout<<"Point does not lies in a rectangle "<<endl;
    
    
    return 0;
}
