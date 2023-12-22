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
		cout<<"Enter coordinates of P3 = "<<endl;
	cin>>x3>>y3;
	cout<<"P3(" <<x3<<","<<y3<< ")"<<endl;
		double AB= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    // Check triangle type
    if (AB == BC && BC == AC) {
        cout << "Equilateral Triangle" << endl;
        
    } else if (AB == BC || BC == AC || AB== AC) {
        cout << "Isosceles Triangle" << endl;
    } else {
        // Check for right-angled triangle using Pythagorean theorem
        if (pow(AB, 2) + pow(BC, 2) == pow(AC, 2) ||
            pow(BC, 2) + pow(AC, 2) == pow(AB, 2) ||
            pow(AB, 2) + pow(AC, 2) == pow(BC, 2)) {
            cout << "Right-Angled Triangle" << endl;
        } else {
            cout << "Scalene Triangle" << endl;
        }
    }
    
    
 return 0;   
}
		