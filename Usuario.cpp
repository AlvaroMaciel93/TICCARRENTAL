#include <iostream>
#include <string>
#include "TICcarRENTAL.hpp"

using namespace std;

void Usuario::adicionarUsuario(string CPF, string nome, string endereco, string telefone){
    cout << "Digite o CPF: ";
    cin >> CPF;
    cin.ignore();
    cout << "Digite o nome: ";
    getline(cin, nome);
    cout << "Digite o endereco: ";
    getline(cin, endereco);
    cout << "Digite o telefone: ";
    getline(cin, telefone);
}

void Usuario::setCPF(string CPF){
    this->CPF = CPF;
}
string Usuario::getCPF(){
    return CPF;
}
void Usuario::setNome(string nome){
    this->nome = nome;
}

string Usuario::getNome(){
    return nome;
}

void Usuario::setEndereco(string endereco){
    this->endereco = endereco;
}

string Usuario::getEndereco(){
    return endereco;
}
void Usuario::setTelefone(string telefone){
    this->telefone = telefone;
}
string Usuario::getTelefone(){
    return telefone;
}
void Usuario::exibir_dados(){
    cout << "CPF: " << CPF << endl;
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Telefone: " << telefone << endl;
    
}
