#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
string RNG(int wordlength){
	string word="";
	for(int i=0;i<wordlength;i++){
		char Rch='A'+rand()%26;
		word+=Rch;
	}
	return word;
}
void slash(){
	cout<<"\n-------------------\n";
}
void new1(){
	cout<<"\n";
}
int main(){
	srand(time(0));
	string p1,p2;
	cout<<"Enter Player 1 Name: ";
	cin>>p1;
	new1();
	clock_t start,end;
	int score1=0,score2=0;
	start=clock();
	cout<<p1<<"'s Turn...";
	new1();
	for(int i=1;i<=5;i++){
		int wordlength=rand()%5+3;
		string word=RNG(wordlength);
		string ans;
		cout<<"\nType it: "<<word<<endl;
		cin>>ans;
		if(word==ans){
			cout<<"----WELDONE!----"<<endl;
			score1++;
		}
		else{
			cout<<"----SOMETHING WRONG----\n----(TRY AGAIN)----";
		}
	}
	end=clock();
	double playertime1=(end-start)/static_cast<double>(CLOCKS_PER_SEC);
	new1();
	slash();
	cout<<"Total Score of "<<p1<<" is "<<score1<<"/5 "<<endl;
	cout<<"Total Time of "<<p1<<" is "<<playertime1<<" Seconds...."<<endl;
	slash();
	slash();
	cout<<"Enter Player 2 name: ";
	cin>>p2;
	cout<<p2<<"'s Turn....";
	new1();
	clock_t start1=clock();
	for(int j=1;j<=5;j++){
		int ran=rand()%5+3;
		string word1=RNG(ran);
		cout<<"\nType it: "<<word1<<endl;
		string ans1;
		cin>>ans1;
		new1();
		if(ans1==word1){
			cout<<"----WELDONE----\n";
			score2++;
		}
		else{
			cout<<"----SOMETHING WRONG----\n----(TRY AGAIN)----";
		}
	}
	new1();
	clock_t end2=clock();
	double playertime2=static_cast<double>(CLOCKS_PER_SEC);
	cout<<"Total Score of "<<p2<<" is "<<score2<<"/5"<<endl;
	cout<<"Total Time of "<<p2<<" is "<<playertime2<<" Seconds..."<<endl;
	slash();
	slash();
	if(score1>score2){
		cout<<"Total Score of "<<p1<<" is "<<score1<<endl;
		cout<<p1<<" WINS"<<endl;
	}
	else if(score1<score2){
		cout<<"Total Score of "<<p2<<" is "<<score1<<endl;
		cout<<p2<<" WINS"<<endl;	
	}
	else if(score1==score2){
		cout<<"----CHECKING TIME----";
		new1();
		if(playertime1>playertime2){
		cout<<"Total Time of "<<p2<<" is "<<playertime2<<endl;
		cout<<p2<<" WINS"<<endl;
		}
		else if(playertime2>playertime1){
		cout<<"Total Time of "<<p1<<" is "<<playertime1<<endl;
		cout<<p1<<" WINS"<<endl;
		}
		else if(playertime2==playertime1){
			cout<<"--WHAT A CO-INCIDENT___ITS A PERFECT TIE--"<<endl;
		}
	}
	return 0;
}

