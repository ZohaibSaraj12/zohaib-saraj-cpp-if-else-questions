//a game for rock paper and scissor using if else 
#include<iostream>
using namespace std;
int main(){

int choice1,choice2,choice3;
cout<<"For player 1 enter (1) for ROCKS, (2) for PAPER, (3) for SCISSORS = ";
cin>>choice1;
cout<<"For player 2 enter (1) for ROCKS, (2) for PAPER, (3) for SCISSORS = ";
cin>>choice2;
if (choice1==1&&choice2==2)
cout<<"Player2 wins! Paper dominates over Rocks "<<endl;
else if (choice1==2 && choice2==3)
cout<<"Player2 Wins! Scissors dominate over paper "<<endl;
else if (choice1==1 && choice2==3)
cout<<"Player1 Wins! Rocks dominate over scissors "<<endl;
else if (choice1==2 && choice2==1)
cout<<"Player1 wins! paper dominates over rocks "<<endl;
else if (choice1==3 && choice2==2)
cout<<"player1 wins! scissors dominate over paper "<<endl;
else if (choice1==3 && choice2==1)
cout<<"player2 wins! Rocks dominate over scissors "<<endl;
else if (choice1==choice2 )
cout<<"DRAW! BOTH ENTERED SAME VALUE "<<endl;
else 
cout<<"INVALID INPUT! ANY OF PLAYER OR BOTH ENTERED WRONG VALUE"<<endl;




    return 0;
}