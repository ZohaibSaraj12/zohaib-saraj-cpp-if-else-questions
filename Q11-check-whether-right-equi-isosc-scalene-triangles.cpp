                                         //Written by ZOHAIB SARAJ 
 
#include<iostream>
// including complexmath library because we would do 
// power and square root which are rather complex identities 
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
		cout<<"Enter coordinates of P3 = "<<endl;
	cin>>x3>>y3;
	cout<<"P3(" <<x3<<","<<y3<< ")"<<endl;
		double AB= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    // if tthree sides are equal it will be equaliteral triangle 
    if (AB == BC && BC == AC) {
        cout << "Equilateral Triangle" << endl;
        //if two sides equal of any triangle it will be isosceles
    } else if (AB == BC || BC == AC || AB== AC) {
        cout << "Isosceles Triangle" << endl;
    } else {
        // Check for right-angled triangle using Pythagorean theorem
	// as we know by pythoagorean theorem 
	// a2 + b2 = c2 
	// so checking probability of three angles one by one 
        if (pow(AB, 2) + pow(BC, 2) == pow(AC, 2) ||
            pow(BC, 2) + pow(AC, 2) == pow(AB, 2) ||
            pow(AB, 2) + pow(AC, 2) == pow(BC, 2)) {
            cout << "Right-Angled Triangle" << endl;
        } 
	// without this it will be scalene means no side is equal to other three are different 	
	else {
            cout << "Scalene Triangle" << endl;
        }
    }
    
    
 return 0;   
}
		
