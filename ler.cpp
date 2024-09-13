#include<iostream>
#include<fstream>

using namespace std;

int main(){

string linha;

ifstream arquivo("arquivo.txt");

if(arquivo.is_open()){

  while(getline(arquivo, linha)){
    cout << linha << '\n';

}

arquivo.close();
}
else{
cout << "erro" << endl;
}

return 0;
}
