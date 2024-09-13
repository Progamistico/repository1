#include<cstring>
#include<limits>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<cstdio>

using namespace std;

string nome;

void printmenu();
void menu();
void cadastro();
void lista();
void pesquisa();

int main(){

menu();

return 0;
}

void printmenu(){


	system("clear");
	cout <<"\n______________\n|----MENU----|\n| 1 Cadastro |\n| 2 Lista    |\n| 3 Pesquisa |\n| 4 Sair     |\n|____________|\n\n";


}

void menu(){
int op;
	printmenu();


if(cin >> op){
	switch(op){
		case 1: cadastro();
		break;

		case 2: lista();
		break;

		case 3: pesquisa();
		break;


		case 4: system("clear");
			cout << "closed";
                break;

		default: cout << "invalided";
		menu();
		break;

	}
    }else{
cout << "invalided";
      // Limpa o estado de falha e ignora o restante da linha
        std::cin.clear(); // Limpa o estado de falha
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

menu();
}

}




void cadastro(){
	printmenu();
	string nome;
	cout << "--Nome--: ";
	cin >> nome;
	ofstream arq;
	arq.open("notas.txt",ios_base::app);
	arq << nome << "\n";
	arq.close();
	cout << nome << " salvo";
	menu();
}

void lista(){

	system("clear");
	printmenu();
	system("cat notas.txt");
	getchar();
	getchar();
	menu();
}

void pesquisa(){

 int i;
 printmenu();
 string achar;
 string testar;
 cin >> achar;
 ifstream pes;
 pes.open("notas.txt");
	for(i=0; i<100; i++){
		getline(pes,testar);
		if(achar==testar){
		  cout << "\nNome:  " << achar << "encontrado";
	}
	}


pes.close();
getchar();
menu();
}

