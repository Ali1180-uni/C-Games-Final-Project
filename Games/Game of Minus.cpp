#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));//To start time
	string p1;//To input name
	cout<<"Player 1 Name: ";
	cin>>p1;
	cout<<"_______________________\n";
	clock_t start,end;
	start=clock();//To Start Time
	cout<<p1<<" Turn...."<<endl;
	cout<<"_______________________\n";
	int score1=0 , score2 = 0;//To make score value 0
	for(int i=0;i<5;i++){//Loop for 5 time questioning
	int x1=rand()%100+1;//For Random Value of First value
	int x2=rand()%100+1;//For Random Value of Second value
	if(x1<x2)
	swap(x1,x2);//To swap by swapping Function to avoid negative value
	cout<<endl<<"Enter Your Answer :"<<x1<<"-"<<x2<<" =";//Statement for input
	int ans;
	cin>>ans;//Taking Answer input
	if(ans==(x1-x2)){//Showing Correct & Wrong
		cout<<"\t----CORRECT!----";
		score1++;
	}
	else{
		cout<<"\t----Wrong!----";
	}
	}
	end = clock();//End the Time count
	double player1_time=(end-start)/static_cast<double>(CLOCKS_PER_SEC);//Storing value of time of Player 1
	cout<<"\n_______________________";
	cout<<endl<<p1<<"'s Score..."<<endl;//Showing Score
	cout<<"_______________________";
	cout<<endl<<"The Score of "<<p1<<" is "<<score1<<"/5"<<endl;
	cout<<"_______________________";
	cout<<endl<<"Total time is "<<player1_time<<" Seconds"<<endl;
	cout<<"\n_______________________";
	cout<<"\n_______________________";
	cout<<"\n_______________________";	
	string p2;
	cout<<endl<<"Player 2 Name: ";
	cin>>p2;
	cout<<"_______________________\n";
	clock_t start1,end1;
	start1=clock();
	cout<<p2<<" Turn...."<<endl;
	cout<<"_______________________\n";
	for(int i=0;i<5;i++){
	int x3=rand()%100+1;
	int x4=rand()%100+1;
	if(x3<x4)
	swap(x3,x4);
	cout<<endl<<"Enter Your Answer :"<<x3<<"-"<<x4<<" =";
	int answ;
	cin>>answ;
	if(answ==(x3-x4)){
		cout<<"\t----CORRECT!----";
		score2++;
	}
	else{
		cout<<"\t----Wrong!----";
	}
	}
	end1 = clock();
	double player2_time=(end1-start1)/static_cast<double>(CLOCKS_PER_SEC);
	cout<<"\n_______________________";
	cout<<endl<<p2<<"'s Score..."<<endl;
	cout<<"_______________________";
	cout<<endl<<"The Score of "<<p2<<" is "<<score2<<"/5"<<endl;
	cout<<"_______________________";
	cout<<endl<<"Total time is "<<player2_time<<" Seconds"<<endl;
	//Announcing Winner on the basis of Score.....
	if(score1>score2){
		cout<<p1<<" is Winner!";
	}
	else if(score1<score2){
		cout<<p2<<" is Winner!";
	}
	//Announcing Winner on the Basis of Time.....
	else if(score1==score2){
		cout<<"Checking Time...\n";
		if(player1_time<player2_time){
		  cout<<p1<<" is Winner!";
		}
		else if(player1_time>player2_time){
		  cout<<p2<<" is Winner!";
		}
		else{
			cout<<"Draw!!!!";
		}
	}
	return 0;
}

