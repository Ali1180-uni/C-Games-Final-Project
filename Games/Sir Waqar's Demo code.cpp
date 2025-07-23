#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{
	srand(time(0));
	string p1;
	cout<<"Player-1 First name: ";
	cin>>p1;
	int score_1,score_2=0;
	clock_t start,end;
	start=clock();
	cout<<"____________________";
	cout<<endl<<p1<<"  Turn.....";
	cout<<"\n____________________";
	for(int i=0;i<5;i++){
		int x1=rand()%100+1;
	int x2=rand()%100+1;
	if(x1<x2)
	swap(x1,x2);
	cout<<"\n What is the Answer of: "<<x1<<"-"<<x2<<"=";
	int ans;
	cin>>ans;
	if(ans==(x1-x2)){
		cout<<"\t----CORRECT----";
		score_1++;
	}
	else
	cout<<"\t----WRONG----";
	}
	end=clock();
	cout<<"\n____________________";
	cout<<endl<<p1<<"  SCORE....";
	cout<<"\n____________________";
	double time_player1=(end-start)/static_cast<double>(CLOCKS_PER_SEC);
	cout<<endl<<"Score="<<score_1<<"/5";
	cout<<endl<<"Time="<<time_player1<<"Seconds";
	return 0;
}
