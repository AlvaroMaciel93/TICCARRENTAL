#include <iostream>
#include <vector>
#include <string>
#include "TICcarRENTAL.hpp"

// Implementação do construtor da classe Cliente
Cliente::Cliente(string CPF, string nome, string endereco, string telefone, string CNH_cliente)
    : Usuario(CPF, nome, endereco, telefone)
{
    setCNH_cliente(CNH_cliente);
}

// Método para cotar o valor de um aluguel
float cotar_aluguel(const string &veiculo, const string &dataInicio, const string &dataTermino)
{
    // Implementação da lógica de cotação do aluguel
    // Retorna -1 se o veículo estiver alugado ou o valor calculado do aluguel
    return -1; // Implemente a lógica real aqui
}

// Método para solicitar um aluguel
Aluguel solicita_aluguel(const string &veiculo, const string &dataInicio, const string &dataTermino)
{
    // Implementação da lógica para solicitar o aluguel
    Aluguel novoAluguel;
    novoAluguel.setVeiculo(veiculo);
    novoAluguel.setDataInicio(dataInicio);
    novoAluguel.setDataTermino(dataTermino);
    // Calcula o valor do aluguel e define no objeto Aluguel
    novoAluguel.calcular_valor_final()
    // Adiciona o aluguel ao histórico
    historicoAlugueis.push_back(novoAluguel);
    return novoAluguel;
}

// Método para devolver um veículo alugado
void devolver_veiculo(const Aluguel &aluguel, const string &dataDevolucao)
{
    // Implementação da lógica para devolver o veículo e finalizar o aluguel
    // Atualize o status do aluguel e calcule eventuais custos adicionais
}

void Cliente::setCNH_cliente(string CNH_cliente)
{
    this->CNH_cliente = CNH_cliente;
}
