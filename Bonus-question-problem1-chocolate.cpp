/*               ********BONUS(CHOCOLATE)*********
Problem # 1: Write a program that takes marks of 5 different students(1,2,3,4,5)
 in 5 different courses as input and output the highest marks in each course along 
with the id of student(e.g. 1,2,3,4,5) who scored in. 
In problem 1 the input is student 1(all courses result) then 2nd 
student all results.... and so on. */
#include<iostream>
using namespace std;
int main(){
		int c1s1,c1s2,c1s3,c1s4,c1s5;
		int c2s1,c2s2,c2s3,c2s4,c2s5;
		int c3s1,c3s2,c3s3,c3s4,c3s5;
		int c4s1,c4s2,c4s3,c4s4,c4s5;
		int c5s1,c5s2,c5s3,c5s4,c5s5;
		int st1,st2,st3,st4,st5;
		
	cout<<"**************************************"<<endl;
	cout<<"Enter the roll no of student 1  = "<<endl;
	cin>>st1;
	cout<<"**************************************"<<endl;
	cout<<"Enter marks in 5 different subjects = "<<endl;
	cin>>c1s1>>c2s1>>c3s1>>c4s1>>c5s1;

	int r1 = c1s1 + c2s1 + c3s1 + c4s1 + c5s1 ; 
	cout<<endl<<"**********************************************************"<<endl;
	cout<<"The result of all courses of student1 is = "<<r1<<endl;

	if (c1s1 > c2s1 && c1s1 > c3s1 && c1s1 > c4s1 && c1s1 > c5s1 ){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st1<<" has highest marks in course1 = "<<c1s1<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c2s1 > c1s1 && c2s1 > c3s1 && c2s1 > c4s1 && c2s1 > c5s1)
	{	
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st1<<" has highest marks in course2 = "<<c2s1<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c3s1 > c2s1 && c3s1 > c1s1 && c3s1 > c4s1 && c3s1 > c5s1)
	{
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st1<<" has highest marks in course3 = "<<c3s1<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else if (c4s1 > c1s1 && c4s1 > c2s1 && c4s1 > c3s1 && c4s1 > c5s1){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st1<<" has highest marks in course4 = "<<c4s1<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c5s1 > c1s1 && c5s1 > c2s1 && c5s1>c3s1 && c1s1 > c4s1 ){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st1<<" has highest marks in course5 = "<<c5s1<<endl;
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
	cout<<"Enter the roll no of student2  = "<<endl;
	cin>>st2;
    cout<<"**************************************"<<endl;
	cout<<"Enter marks of student2 of all courses = "<<endl;
	cout<<"**************************************"<<endl;
    cin>>c1s2>>c2s2>>c3s2>>c4s2>>c5s2;
    cout<<endl<<"**********************************************************"<<endl;
	int r2 = c1s2+ c2s2 + c3s2 + c4s2 + c5s2 ; 
	cout<<"The result of all courses of student2 is = "<<r2<<endl;
		if (c1s2 > c2s2 && c1s2 > c3s2 && c1s2 > c4s2 && c1s2 > c5s2 ){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st2<<" has highest marks in course1 = "<<c1s2<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c2s2 > c1s2 && c2s2 > c3s2 && c2s2 > c4s2 && c2s2 > c5s2)
	{	
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st2<<" has highest marks in course2 = "<<c2s2<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c3s2 > c2s2 && c3s2 > c1s2 && c3s2 > c4s2 && c3s2 > c5s2)
	{
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st2<<" has highest marks in course3 = "<<c3s2<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else if (c4s2 > c1s2 && c4s2 > c2s2 && c4s2 > c3s2 && c4s2 > c5s2){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st2<<" has highest marks in course4 = "<<c4s2<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c5s2 > c1s2 && c5s2 > c2s2 && c5s2>c3s2 && c1s2 > c4s2 ){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st2<<" has highest marks in course5 = "<<c5s2<<endl;
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
	cout<<"Enter the roll no of student3  = "<<endl;
	cin>>st3;
	cout<<"**************************************"<<endl;
    cout<<"Enter all subject marks of student3 = "<<endl;
    cout<<"**************************************"<<endl;
	cin>>c1s3>>c2s3>>c3s3>>c4s3>>c5s3;
	int r3 = c1s3 + c2s3 + c3s3 + c4s3 + c5s3 ; 
	cout<<"The result of all courses of student3 is = "<<r3<<endl;
	cout<<"************************************* *"<<endl;
	if (c1s3 > c2s3 && c1s3 > c3s3 && c1s3 > c4s3 && c1s3> c5s3 ){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st3<<" has highest marks in course1 = "<<c1s3<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c2s3 > c1s3 && c2s3 > c3s3 && c2s3 > c4s3 && c2s3 > c5s3)
	{	
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st3<<" has highest marks in course2 = "<<c2s3<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c3s3 > c2s3 && c3s3 > c1s3 && c3s3 > c4s3 && c3s3 > c5s3)
	{
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st3<<" has highest marks in course3 = "<<c3s3<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else if (c4s3 > c1s3 && c4s3 > c2s3 && c4s3 > c3s3 && c4s3 > c5s3){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st3<<" has highest marks in course4 = "<<c4s3<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c5s3 > c1s3 && c5s3 > c2s3 && c5s3>c3s3 && c1s3 > c4s3 ){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st3<<" has highest marks in course5 = "<<c5s3<<endl;
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
	cout<<"Enter the roll no of student4  = "<<endl;
	cin>>st4;
	cout<<"**************************************"<<endl;
	cout<<"Enter all subject marks of student4 = "<<endl;
	cout<<"**************************************"<<endl;
	cin>>c1s4>>c2s4>>c3s4>>c4s4>>c5s4;
	int r4 = c4s1 + c4s2 + c4s3 + c4s4 + c4s5 ; 
	cout<<"**************************************"<<endl;
	cout<<"The result of all courses of student4 is = "<<r4<<endl;
	if (c1s4 > c2s4 && c1s4 > c3s4 && c1s4 > c4s4 && c1s4 > c5s4 ){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st4<<" has highest marks in course1 = "<<c1s4<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c2s4 > c1s4 && c2s4 > c3s4 && c2s4 > c4s4 && c2s4 > c5s4)
	{	
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st4<<" has highest marks in course2 = "<<c2s4<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c3s4 > c2s4 && c3s4 > c1s4 && c3s4 > c4s4 && c3s4 > c5s4)
	{
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st4<<" has highest marks in course3 = "<<c3s4<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else if (c4s4 > c1s4 && c4s4 > c2s4 && c4s4 > c3s4 && c4s4 > c5s4){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st4<<" has highest marks in course4 = "<<c4s4<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c5s4 > c1s4 && c5s4 > c2s4 && c5s4>c3s4 && c1s4 > c4s4 ){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st4<<" has highest marks in course5 = "<<c5s4<<endl;
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
	cout<<"Enter the roll no of student5  = "<<endl;
	cin>>st5;
	cout<<"**************************************"<<endl;
	cout<<"Enter all subject marks of student5 = "<<endl;
	cout<<"**************************************"<<endl;
	cin>>c1s5>>c2s5>>c3s5>>c4s5>>c5s5;
	int r5 = c1s5 + c2s5 + c3s5 + c4s5 + c5s5;
	cout<<"The result of all courses of student5 = "<<r5<<endl;
	cout<<"**************************************"<<endl;
	if (c1s5 > c2s5 && c1s5 > c3s5 && c1s5 > c4s5 && c1s5 > c5s5 ){
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st5<<" has highest marks in course1 = "<<c1s5<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c2s5 > c1s5 && c2s5 > c3s5 && c2s5 > c4s5 && c2s5 > c5s5)
	{	
	cout<<endl<<"**********************************************************"<<endl;
	cout<<st5<<" has highest marks in course2 = "<<c2s5<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
	}
	else if (c3s5 > c2s5 && c3s5 > c1s5 && c3s5 > c4s5 && c3s5 > c5s5)
	{
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st5<<" has highest marks in course3 = "<<c3s5<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
    else if (c4s5 > c1s5 && c4s5 > c2s5 && c4s5 > c3s5 && c4s5 > c5s5){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st5<<" has highest marks in course4 = "<<c4s5<<endl;
	cout<<"                        "<<char(3)<<"CONGRATS"<<char(3)<<endl;
	cout<<endl<<"**********************************************************"<<endl;
}
	else if (c5s5 > c1s5 && c5s5 > c2s5 && c5s5>c3s5 && c1s5 > c4s5 ){
		cout<<endl<<"**********************************************************"<<endl;
	cout<<st5<<" has highest marks in course5 = "<<c5s5<<endl;
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
