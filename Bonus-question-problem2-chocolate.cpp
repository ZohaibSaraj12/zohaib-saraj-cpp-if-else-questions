/*               ********BONUS(CHOCOLATE)*********
Problem # 2: A program that takes marks of n different students(1,2,3,4,5) 
in k different courses as input and prints the highest 
marks in each course along with the id of student(e.g. 1,2,3,4,5...n) who scored it.
In problem 2 the input is Course 1(all the students result) and then
course 2(all students result)... and so on */
#include<iostream>
using namespace std;
int main(){
		int c1s1,c1s2,c1s3,c1s4,c1s5;
		int c2s1,c2s2,c2s3,c2s4,c2s5;
		int c3s1,c3s2,c3s3,c3s4,c3s5;
		int c4s1,c4s2,c4s3,c4s4,c4s5;
		int c5s1,c5s2,c5s3,c5s4,c5s5;
	cout<<"**************************************"<<endl;
	cout<<"Enter 'ALL STUDENT MARKS' in course1 = "<<endl;
	cout<<"**************************************"<<endl;
	cin>>c1s1>>c1s2>>c1s3>>c1s4>>c1s5;
	int r1 = c1s1 + c1s2 + c1s3 + c1s4 + c1s5 ; 
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"The result of all students is = "<<r1<<endl;

	if (c1s1 > c1s2 && c1s1 > c1s3 && c1s1 > c1s4 && c1s1 > c1s5 ){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student1 got the highest marks in course1 which are = "<<c1s1<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c1s2 > c1s1 && c1s2 > c1s3 && c1s2 > c1s4 && c1s2 > c1s5)
	{	
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student2 got the highest marks in course1 which are = "<<c1s2<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c1s3 > c1s1 && c1s3 > c1s2 && c1s3 > c1s4 && c1s3>c1s5)
	{
		cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student3 got the highest marks in course1 which are = "<<c1s3<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else if (c1s4 > c1s1 && c1s4 > c1s2 && c1s4 > c1s3 && c1s4 > c1s5){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student4 got the highest marks in course1 which are = "<<c1s4<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c1s5 > c1s1 && c1s5 > c1s2 && c1s5>c1s3 && c1s5 > c1s4 ){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student5 got the highest marks in course1 which are = "<<c1s5<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else 
{ 
    cout<<"*********"<<endl;
	cout<<"EQUAL"<<endl;
	cout<<"*********"<<endl;
}
    cout<<"**************************************"<<endl;
	cout<<"Enter 'ALL STUDENT MARKS' in course2 = "<<endl;
	cout<<"**************************************"<<endl;
    cin>>c2s1>>c2s2>>c2s3>>c2s4>>c2s5;
    cout<<endl<<"**********************************************************"<<endl;
	int r2 = c2s1 + c2s2 + c2s3 + c2s4 + c2s5 ; 
	cout<<"The result of all students is = "<<r2<<endl;
	if (c2s1 > c2s2 && c2s1 > c2s3 && c2s1 > c2s4 && c2s1 > c2s5 ) {              
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student1 got the highest marks in course2 which are = "<<c2s1<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c2s2 > c2s1 && c2s2 > c2s3 && c2s2 > c2s4 && c2s2 > c2s5){
    cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student2 got the highest marks in course2 which are = "<<c2s2<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c2s3 > c2s1 && c2s3 > c2s2 && c2s3 > c2s4 && c2s3>c2s5){
    cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student3 got the highest marks in course2 which are = "<<c2s3<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else if (c2s4 > c2s1 && c2s4 > c2s2 && c2s4 > c2s3 && c2s4 > c2s5){
    cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student4 got the highest marks in course2 which are = "<<c2s4<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c2s5 > c2s1 && c2s5 > c2s2 && c2s5>c2s3 && c2s5 > c2s4 ){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student5 got the highest marks in course2 which are = "<<c2s5<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
   else 
{ 
    cout<<"*********"<<endl;
	cout<<"EQUAL"<<endl;
	cout<<"*********"<<endl;
}
	cout<<"**************************************"<<endl;
	cout<<"Enter 'ALL STUDENT MARKS' in course3 = "<<endl;
    cout<<"**************************************"<<endl;
	cin>>c3s1>>c3s2>>c3s3>>c3s4>>c3s5;
	int r3 = c3s1 + c3s2 + c3s3 + c3s4 + c3s5 ; 
	cout<<"The result of all students is = "<<r3<<endl;
	cout<<"**************************************"<<endl;
	if (c3s1 > c3s2 && c3s1 > c3s3 && c3s1 > c3s4 && c3s1 > c3s5 ) {
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student1 got the highest marks in course3 which are = "<<c3s1<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c3s2 > c3s1 && c3s2 > c3s3 && c3s2 > c3s4 && c3s2 > c3s5){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student2 got the highest marks in course3 which are = "<<c3s2<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c3s3 > c3s1 && c3s3 > c3s2 && c3s3 > c3s4 && c3s3>c3s5){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student3 got the highest marks in course3 which are = "<<c3s3<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else if (c3s4 > c3s1 && c3s4 > c3s2 && c3s4 > c3s3 && c3s4 > c3s5){
    cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student4 got the highest marks in course3 which are = "<<c3s4<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl; 
}
	else if (c3s5 > c3s1 && c3s5 > c3s2 && c3s5>c3s3 && c3s5 > c3s4 ){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student5 got the highest marks in course3 which are = "<<c3s5<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
   else 
{ 
    cout<<"*********"<<endl;
	cout<<"EQUAL"<<endl;
	cout<<"*********"<<endl;
}
	cout<<"**************************************"<<endl;
	cout<<"Enter 'ALL STUDENT MARKS' in course4 = "<<endl;
	cout<<"**************************************"<<endl;
	cin>>c4s1>>c4s2>>c4s3>>c4s4>>c4s5;
	int r4 = c4s1 + c4s2 + c4s3 + c4s4 + c4s5 ; 
	cout<<"**************************************"<<endl;
	cout<<"The result of all students is = "<<r4<<endl;
	if (c4s1 > c4s2 && c4s1 > c4s3 && c4s1 > c4s4 && c4s1 > c4s5 )
	{
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student1 got the highest marks in course4 which are = "<<c4s1<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c4s2 > c4s1 && c4s2 > c4s3 && c4s2 > c4s4 && c4s2 > c4s5){
cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student2 got the highest marks in course4 which are = "<<c4s2<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c4s3 > c4s1 && c4s3 > c4s2 && c4s3 > c4s4 && c4s3>c4s5) {
		cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student3 got the highest marks in course4 which are = "<<c4s3<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else if (c4s4 > c4s1 && c4s4 > c4s2 && c4s4 > c4s3 && c4s4 > c4s5){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student4 got the highest marks in course4 which are = "<<c4s4<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c4s5 > c4s1 && c4s5 > c4s2 && c4s5>c4s3 && c4s5 > c4s4 ){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student5 got the highest marks in course4 which are = "<<c4s5<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
   else 
{ 
    cout<<"*********"<<endl;
	cout<<"EQUAL"<<endl;
	cout<<"*********"<<endl;
}
	cout<<"**************************************"<<endl;
	cout<<"Enter 'ALL STUDENT MARKS' in course5 = "<<endl;
	cout<<"**************************************"<<endl;
	cin>>c5s1>>c5s2>>c5s3>>c5s4>>c5s5;
	int r5 = c5s1 + c5s2 + c5s3 + c5s4 + c5s5;
	cout<<"The result of all students is = "<<r2<<endl;
	cout<<"**************************************"<<endl;
	if (c5s1 > c5s2 && c5s1 > c5s3 && c5s1 > c5s4 && c5s1 > c5s5 ){
cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student1 got the highest marks in course5 which are = "<<c5s1<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c5s2 > c5s1 && c5s2 > c5s3 && c5s2 > c5s4 && c5s2 > c5s5){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student2 got the highest marks in course5 which are = "<<c5s2<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c5s3 > c5s1 && c5s3 > c5s2 && c5s3 > c5s4 && c5s3>c5s5){
    cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student3 got the highest marks in course5 which are = "<<c5s3<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
    else if (c5s4 > c5s1 && c5s4 > c5s2 && c5s4 > c5s3 && c5s4 > c5s5){
    cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student4 got the highest marks in course5 which are = "<<c5s4<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c5s5 > c5s1 && c5s5 > c2s2 && c2s5>c2s3 && c2s5 > c2s4 ){
cout<<endl<<"**********************************************************"<<endl;
	cout<<"Student5 got the highest marks in course5 which are = "<<c5s5<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	   else 
{ 
    cout<<"*********"<<endl;
	cout<<"EQUAL"<<endl;
	cout<<"*********"<<endl;
}
	return 0;
}