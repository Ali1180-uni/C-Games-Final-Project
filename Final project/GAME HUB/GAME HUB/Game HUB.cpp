#include <iostream>
#include<iomanip>
#include <conio.h>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include <windows.h>

using namespace std;
void showMenu();     // MAIN Menue
void showMenu1();   // Word scramble game
void showMenu2();  //  Secound game

// starting of class 
class WordScramble {
    private:
        string Words[50];
        string pname;
        int score;
        double playtime;

    public:
        void setplayer(string name) {
            pname = name;
        }

        string getplayer() {
            return pname;
        }

        void setwords() {
            string tempWords[50] = { "Function", "Compiler", "Algorithm", "Variable", "Operator", "Iteration", "Binary", "Encapsulation", "Recursion", "Database", "Debugging", "Interface", "Protocol", "Syntax", "Framework", "Inheritance", "Polymorphism", "Abstraction", "Concurrency", "Mutex", "Semaphore", "Deadlock", "Optimization", "Overloading", "Libraries", "Template", "Heap", "Stack", "Queue", "LinkedList", "Tree", "Graph", "HashTable", "Network", "Latency", "Throughput", "Bandwidth", "Encryption", "Decryption", "Compression", "Decompression", "Normalization", "Denormalization", "Modularity", "Cohesion", "Coupling", "Agile", "Scrum", "DevOps", "VersionControl"};
            for(int i = 0; i < 50; i++) {
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
        	setwords();
        	clock_t start, end;
            start = clock();
            string ans;
            score = 0;
            for(int i = 0; i < 5; i++) { 
                string origword = Words[rand() % 50];
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
                    cout<<"\t|---| Correct Word is "<<origword<<" |---|\n";
                }
            }
            end = clock();
            cout << "\n\n\t\t----Your Score is: " << score << "/5----" << endl;
            playtime = (end - start) / static_cast<double>(CLOCKS_PER_SEC);
            cout << "\n|-------------------Your Time is: " << playtime << "-------------------|" << endl;
            writeonfile();
        }
        
        void writeonfile() {
            ofstream x("Score.txt", ios::out | ios::app);
            if(!x.is_open()) {
                cout << "File is not open!!\n";
                return;
            }
           x << "Name = " << setw(20) << left << pname << "Time = " << setw(10) << left << playtime << "Score = " << setw(5) << left << score << endl;
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
		x.close();
		}

        
}; // ending of class 

void scramblegame(){
	srand(time(0));
    WordScramble X1;
    char name[100];
    cout << "Enter Your name: ";
    cin.ignore();
    cin.getline(name,100);
    X1.setplayer(name);
    cout << "\n|-----------------Ready! " << X1.getplayer() << "-----------------|\n";
    X1.game();
}

void printLine(const string &text, int spaces) { // For line spacing 
    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }
    cout << text << endl;
}

void UI() {  // For Main Inter Face 
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

void menu1(string menuY[],int input){  // For Scrambe Game Sub_Menue
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

void showMenu1(){  // Sub_Menue Of Scramble Game 
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

void menu2(string menuX[],int input){ // For Sub_Menue Of Secound Game 
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

void showMenu2(){  // Sub_Menue Of Secound Game 

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

void showMenu(){  // Main Menue For Both Games 

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

int main(){  // Main Function 
    UI();
    showMenu();
    return 0;

}
