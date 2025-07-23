#include <iostream>
#include <conio.h>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include <windows.h>
using namespace std;
void showMenu();//main menuee
void showMenu1();//for word scramble
void showMenu2();//for secound game
class WordScramble {
    private:
        string Words[15];
        string pname;
        int score;

    public:
        void setplayer(string name) {
            pname = name;
        }

        string getplayer() {
            return pname;
        }

        void setwords() {
            string tempWords[15] = {"Function", "Compiler", "Algorithm", "Variable", "Operator", "Iteration", "Binary", "Encapsulation", "Recursion", "Database", "Debugging", "Interface", "Protocol", "Syntax", "Framework"};
            for(int i = 0; i < 15; i++) {
                Words[i] = tempWords[i];
            }
        }

        void Scramble(string &word) {
            int len = word.length();
            for(int i = len - 1; i > 0; i--) {
                int j = rand() % (i + 1);
                swap(word[i], word[j]);
            }
        }

        void game() {
            string ans;
            score = 0;
            for(int i = 0; i < 5; i++) { 
                string origword = Words[rand() % 15];
                string word = origword;
                Scramble(word);
                cout << "\nScramble Word is: " << word << endl;
                cout << "\nEnter the correct word: ";
                cin >> ans;
                if(ans == origword) {
                    cout << "\n|-------------------Your Answer is Correct-------------------|\n";
                    score++;
                } else {
                    cout << "\n|-------------------Incorrect Answer!-------------------|\n";
                }
            }
            cout << "\n\n\t\t----Your Score is: " << score << "/5----" << endl;
        }

        void filehandling(double playtime) {
            ofstream x("Score.txt", ios::out | ios::app);
            if(!x.is_open()) {
                cout << "File is not open!!\n";
                return;
            }
            x << "Name = " << pname << "  Time = " << playtime << "  Score = " << score << endl;
            x.close();
        }
        void readfromfile(){
        	ifstream x;
        	x.open("Score.txt",ios::in);
        if(!x){
			cout<<"File cannot be opened !!\n";
		}
		string var;
		while(getline(x,var)){
			cout<<var<<endl;
	
		}	
			
		}

        void play() {
            setwords();
            clock_t start, end;
            start = clock();
            game();
            end = clock();
            double playtime = (end - start) / static_cast<double>(CLOCKS_PER_SEC);
            cout << "\n|-------------------Your Time is: " << playtime << "-------------------|" << endl;
            filehandling(playtime);
        }
};
void scramblegame(){
	srand(time(0));
    WordScramble X1;
    char name[100];
    cout << "Enter Your name: ";
    gets(name);
    X1.setplayer(name);
    cout << "\n|-----------------Ready! " << X1.getplayer() << "-----------------|\n";
    X1.play();
}

//for function animation
void printLine(const string &text, int spaces) {
    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }
    cout << text << endl;
}
//for interface
void UI() {
    const string text = "- -  - -  - -   - -   - -  - -  - -  - -  - -  - -  - -  - -  - -  - -  - -  - -  - -  - -  - -   - -   - -  - -  - -  - -   - -   - -";
    int pos1 = 0, pos2 = 10, pos3 = 20;

    while (true) {
        system("cls");
        printLine(text, pos1);
        printLine(text, pos2);
        printLine(text, pos3);
        printLine(text, pos1);
        printLine(text, pos2);
        printLine(text, pos3);
        cout << "\n\t\t\t\t\t\t\t  OooooooooooooooooooooooooooooooooooooooooooooooooO";
        cout << "\n\t\t\t\t\t\t\t O     GGGGGGGG        A        MM   MM   EEEEEEE    O";
        cout << "\n\t\t\t\t\t\t\tO     GG     GG       A A       M M M M   E           O";
        cout << "\n\t\t\t\t\t\t\tO    GG              A   A      M  M  M   E           O";
        cout << "\n\t\t\t\t\t\t\tO     GG   GGGGGG   AAAAAAA     M     M   EEEEE       O";
        cout << "\n\t\t\t\t\t\t\tO      GG    GGG   A       A    M     M   E           O";
        cout << "\n\t\t\t\t\t\t\tO       GGGGGGG   A         A   M     M   EEEEEEE     O";
        cout << "\n\t\t\t\t\t\t\tO                                                     O";
        cout << "\n\t\t\t\t\t\t\tO             H        H    U     U  BBBBBB           O";
        cout << "\n\t\t\t\t\t\t\tO             H        H    U     U  B     B          O";
        cout << "\n\t\t\t\t\t\t\tO             H        H    U     U  BBBBBB           O";
        cout << "\n\t\t\t\t\t\t\tO             HHHHHHHHHH    U     U  B     B          O";
        cout << "\n\t\t\t\t\t\t\tO             H        H    U     U  B     B          O";
        cout << "\n\t\t\t\t\t\t\t O            H        H    UUUUUUU  BBBBBB          O";
        cout << "\n\t\t\t\t\t\t\t   OooooooooooooooooooooooooooooooooooooooooooooooooO\n\n";
        printLine(text, pos1);
        printLine(text, pos2);
        printLine(text, pos3);
        printLine(text, pos1);
        printLine(text, pos2);
        printLine(text, pos3);
        cout << "\n\nPress Any Key to Continue...\n";
        pos1 = (pos1 + 1) % 90;
        pos2 = (pos2 + 1) % 90;
        pos3 = (pos3 + 1) % 90;
        if (_kbhit()) {
            getch();
            break;
        }

        Sleep(50);
    }
}
void menu1(string menuY[],int input){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\t|-------------| GAME MENU |-------------|\n\n\n";
	for(int i=0;i<4;i++){
		if(input == i){
			cout<<"\t\t\t\t               -->["<<menuY[i]<<"]<--"<<endl;
		}
		else{
			cout<<"\t\t\t\t                  "<<menuY[i]<<endl;
		}
	}
}
void showMenu2(){
	string menu[]={"Start Game","Score","Instructions","Quit"};
	int point=0;
	char input;
	while(true){
	menu1(menu,point);
	input=getch();
		if(input==-32){
		input=getch();
			switch(input){
				case 72:
					if(point>0){
						 point--;
					}
					break;
				case 80:
					if(point<3){
						 point++;
					}
					break;
			}
		}
		else if(input=='\r'){
			cout<<"You Enter: "<<menu[point]<<endl;
			break;
		}
	}
}
void showMenu1(){
	WordScramble X2;
	string menu[]={"Start Game","Score","Instructions","Quit"};
	int point=0;
	char input;
	while(true){
	menu1(menu,point);
	input=getch();
		if(input==-32){
		input=getch();
			switch(input){
				case 72:
					if(point>0){
						 point--;
					}
					break;
				case 80:
					if(point<3){
						 point++;
					}
					break;
			}
		}
		else if(input=='\r'){
			cout<<"\nYou Enter: "<<menu[point]<<"\n\n";
			if(menu[point]=="Start Game"){
			    scramblegame();
			    cout<<endl;
				system("pause");
				showMenu1();
			}
			else if(menu[point]=="Score"){
				X2.readfromfile();
				cout<<endl;
				system("pause");
				showMenu1();
			}
			else if(menu[point]=="Instructions"){
				cout<<"The goal of the game is to correctly identify the original word from its scrambled version. \nYou’ll be given a series of scrambled words to decode.\n";
				cout<<endl;
				system("pause");
				showMenu1();
			}
			else if(menu[point]=="Quit"){
				showMenu();
			}
			break;
		}
	}
}
void menu2(string menuX[],int input){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\t|-------------| SELECT GAME |-------------|\n\n\n";
	for(int i=0;i<3;i++){
		if(input == i){
			cout<<"\t\t\t\t               -->["<<menuX[i]<<"]<--"<<endl;
		}
		else{
			cout<<"\t\t\t\t                  "<<menuX[i]<<endl;
		}
	}
}
void showMenu(){
	string menu[]={"Chicago Explorar","Word Scramble","Quit"};
	int point=0;
	char input;
	while(true){
		menu2(menu,point);
		input=getch();
		if(input==-32){
			input = getch();
			switch(input){
				case 72:
					if(point>0){
						point--;
					}
					break;
				case 80:
					if(point<2){
						point++;
					}
					break;
			}
		}
		else if(input=='\r'){
			if(menu[point]=="Chicago Explorar"){
				showMenu2();
			}
			else if(menu[point]=="Word Scramble"){
				showMenu1();
			}
			else if(menu[point]=="Quit"){
				cout<<"\n\n\n\t\t\t\t|----------------------| Thanks For Playing !|----------------------|\n\n";
			}
			break;
		}
	}
}
int main(){
    UI();
    showMenu();
    return 0;


}

