#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));//This is for Different Random value on Each run
	cout<<"Enter Maximum of Table: ";//Maximum table upto you want to run
	int t1;
	cin>>t1;
	cout<<"\n_____________\n";
	cout<<"Now the Maximum of Table is: "<<t1<<endl;//Maximum Multiple upto You want to multiply the Table
	cout<<"_____________\n";
	cout<<"Enter Maximum of Multiplication: ";
	int t2;
	cin>>t2;
	//Taking Both Inputs Multiple and Maximum
	cout<<endl<<"_____________\n";
	cout<<"Now the Maximum of Multiplication is: "<<t2<<endl;
	cout<<"_____________\n";
	string p1,p2;
	//Taking Input name of Player 1
	cout<<"player 1 Name: ";
	cin>>p1;
	cout<<endl<<"_____________\n";
	cout<<p1<<"'s Turn...";
	cout<<endl<<"_____________\n";
	clock_t start,end;
	//Time Start of Player 1
	start=clock();
	int score1=0, score2=0; //Score of Both players 0 before run
    for(int i=0;i<5;i++){
    int x1=rand()%t1+1;//Random Value until Maximum
	int x2=rand()%t2+1;//Random value until Multiple
	int ans;
	cout<<"Enter Your Answer: "<<x1<<"x"<<x2<<"=";//Taking Input Answer form User
	cin>>ans;
	//Announcing Winner on the Basis of Score
	if(ans==(x1*x2)){
		cout<<"----CORRECT----\n";
		score1++;
	}
	else{
		cout<<"----WRONG----\n";
	}
	}
	cout<<endl<<"_____________\n";
	//Stop Time of User
	end=clock();
	double player1_time=(end-start)/static_cast<double>(CLOCKS_PER_SEC);//Entering value of time of player 1
	cout<<"Total Score of "<<p1<<" is: "<<score1<<"/5";//Showing Total score of Player 1
	cout<<endl<<"_____________\n";
	cout<<"Total Time of "<<p1<<" is: "<<player1_time<<endl;//showing Total Time of Player 1
	cout<<"_____________\n";
	cout<<"_____________\n";
	cout<<"_____________\n";	
	cout<<"player 2 Name: ";
	cin>>p2;
	cout<<endl<<"_____________\n";
	cout<<p2<<"'s Turn...";
	cout<<endl<<"_____________\n";
	clock_t start1,end1;
	start1=clock();
    for(int j=0;j<5;j++){
    int x3=rand()%t1+1;
	int x4=rand()%t2+1;
	int ans1;
	cout<<"Enter Your Answer: "<<x3<<"x"<<x4<<"=";
	cin>>ans1;
	if(ans1==(x3*x4)){
		cout<<"----CORRECT----\n";
		score2++;
	}
	else{
		cout<<"----WRONG----\n";
	}
	}
	cout<<endl<<"_____________\n";
	end1=clock();
	double player2_time=(end1-start1)/static_cast<double>(CLOCKS_PER_SEC);
	cout<<"Total Score of "<<p2<<" is: "<<score2<<"/5";
	cout<<endl<<"_____________\n";
	cout<<"Total Time of "<<p2<<" is: "<<player2_time<<endl;
	//Announcing Winner on th basis of Score
	if(score1>score2){
		cout<<p1<<" -WINS-"<<endl;
	}
	else if(score1<score2){
		cout<<p2<<" -WINS-"<<endl;
	}
	//Announcing Winner on the basis of Time
	else if(score1==score2){
		cout<<"Checking Time...\n";
		if(player1_time>player2_time){
			cout<<p2<<" -WINS- "<<endl;
		}
		else if(player1_time<player2_time){
			cout<<p1<<" -WINS- "<<endl;
		}
	}
	return 0;
}
