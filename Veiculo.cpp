#include "TICcarRENTAL.hpp"

using namespace std;

Veiculo::Veiculo(string marca, string modelo, string placa, int anodefabricacao, float precoporday){
    this->marca = marca;
    this->modelo = modelo;
    this->placa = placa;
    this->anodefabricacao = anodefabricacao;
    this->precoporday = precoporday;
    this->identificador += identificador;
}

void Veiculo::setPlaca(string placa) {
    this->placa = placa;
}

string Veiculo::getPlaca(){
    return this->placa;
}

void Veiculo::setMarca(string marca){
    this->marca = marca;
}

string Veiculo::getMarca(){
    return this->marca;
}

void Veiculo::setModelo(string modelo){
    this->modelo = modelo;
}

string Veiculo::getModelo(){
    return this->modelo;
}

void Veiculo::setAnoFabricacao(int anoFabricacao){
    this->anodefabricacao = anoFabricacao;
}

int Veiculo::getAnoFabricacao(){
    return this->anodefabricacao;
}

void Veiculo::setPrecoPorDay(float precoporday){
    this->precoporday = precoporday;
}

float Veiculo::getPrecoPorDay(){
    return this->precoporday;
}

string Veiculo::imprimeVeiculo(){
    string veiculo = "Marca: " + getMarca() + 
    ", Modelo: " + getModelo() + 
    ", Placa: " + getPlaca() + 
    ", Ano de Fabricação: " + to_string(getAnoFabricacao()) + 
    ", Preço por dia: " + to_string(getPrecoPorDay());

    return veiculo;
}