#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));//Function For Random value on Each Run
	int score1=0 ,score2=0;//Default Score 0 of Both Players 
	cout<<"Player 1 Name: ";
	string p1;//Taking Input of Player 1
	cin>>p1;
	cin.ignore();//to ignore the previous value of cin
	cout<<"\n-----------------\n";
	cout<<p1<<"'s Turn...";
	cout<<"\n-----------------\n";
	//To Roll the Dice 10 time
	for(int i=1;i<=10;i++){
		cout<<"Press Enter To Roll the Dice...."<<endl;
		cin.get();//For rolling dice on pressing Enter
		
		int x1=rand()%6+1;
		cout<<p1<<"'s Point on "<<i<<" time Dice Roll= "<<x1<<endl;
		score1+=x1;//Adding the Score on Each Roll
		cout<<"-----------------\n";
	}
	cout<<"The Total Score of "<<p1<<" is "<<score1<<endl;
cout<<"\n-----------------";
cout<<"\n-----------------";
cout<<"\n-----------------\n";
	cout<<"Player 2 Name: ";
	string p2;
	cin>>p2;
	cin.ignore();
	cout<<"\n-----------------\n";
	cout<<p2<<"'s Turn...";
	cout<<"\n-----------------\n";
	for(int j=1;j<=10;j++){
		cout<<"Press Enter To Roll the Dice...."<<endl;
		cin.get();
		
		int x2=rand()%6+1;
		cout<<p2<<"'s Point on "<<j<<" time Dice Roll= "<<x2<<endl;
		score2+=x2;
		cout<<"-----------------\n";
	}
	cout<<"The Total Score of "<<p2<<" is "<<score2<<endl;
	cout<<"\n-----------------";
	cout<<"\n-----------------";
	cout<<"\n-----------------\n";
	//Announcing Winner on the Basis of Score
	if(score1>score2){
		cout<<"--------"<<p1<<" is WINNER--------";
	}
	else if(score1<score2){
		cout<<"--------"<<p2<<" is WINNER--------";
	}
	else{
		cout<<"--------ITS TIE--------";
	}
	return 0;
}
