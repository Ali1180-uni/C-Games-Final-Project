#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
class WordScramble{
	private:
		string Words[15];
		string pname;
	public:
		void player(string name){
			pname = name;
		}
		string showplayer(){
			return pname;
		}
		void setwords(){
        	string tempWords[15]={"Ali","Waqar","Talha","Fahad","Abubaker","Laptop","House","Physics","Adil","Area","Volume","Computer","Zahid","Fareed","Lion"};
	    for(int i = 0; i < 15; i++){ Words[i] = tempWords[i]; } 
	}
    void Scramble(string &word){
	int len=word.length();
	for(int i=len-1;i>0;i--){
		int j=rand()%(i+1);
		swap(word[i],word[j]);
	}
}
    void game(){
    string ans;
    int score=0;
    for(int i=0;i<5;i++){ 
	string origword=Words[rand()%15];
	string word=origword;
	Scramble(word);
	cout<<"\nScramble Word is: "<<word<<endl;
	cout<<"\nEnter the corect word :";
	cin>>ans;
	if(ans==origword){
	cout<<"\n|-------------------Your Answer is Correct-------------------|\n";
	score++;
	}
	else{
		cout<<"\n|-------------------Incorrect Answer!-------------------|\n";
	}
  }
  cout<<"\n\n\t\tYour Score is: "<<score<<endl;
}

};
int main(){
	srand(time(0));
	WordScramble X1;
	string name;
	cout<<"Enter Your name: ";
	cin>>name;
	X1.player(name);
	cout<<"|-----------------Ready! "<<X1.showplayer()<<"-----------------|";
	X1.setwords();
	clock_t start,end;
	start=clock();
	X1.game();
	end=clock();
	double playtime=(end-start)/static_cast<double>(CLOCKS_PER_SEC);
	cout<<"\n|-------------------Your Time is: "<<playtime<<"-------------------|"<<endl;
}
