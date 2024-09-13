#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;


void menu();
void cadastro();

int main(){



menu();

return 0;
}


void menu(){
int op;
char nome2[10];
do{
system("clear");
cout << "---MENU--\n 1 cadastro\n 2 lista\n 0 sair" << endl;
cin >> op;
    switch(op){
        case 1:
        
	cadastro();
        break;
        case 2: cout << nome2 << endl;
	cin.get();
        break;
        default: cout << "erro" << endl;
        break;
    }
}while(op != 0);

}


void cadastro(){

  char nome;

   system("clear");
   cout << "nome:" ;
   cin >> nome;


}

