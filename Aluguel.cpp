#include "TICcarRENTAL.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

// Função para converter uma data no formato "dd/mm/aaaa" em dias desde uma data de referência
int converterDataParaDias(const string &data)
{
    tm tm_data = {};
    stringstream ss(data);
    ss >> tm_data.tm_mday;
    ss.ignore(1); // Ignorar a barra
    ss >> tm_data.tm_mon;
    ss.ignore(1); // Ignorar a segunda barra
    ss >> tm_data.tm_year;
    tm_data.tm_mon -= 1;     // A contagem dos meses começa em 0 (janeiro é 0, fevereiro é 1, etc.)
    tm_data.tm_year -= 1900; // O ano é dado em anos completos desde 1900
    time_t t = mktime(&tm_data);
    return static_cast<int>(t) / (60 * 60 * 24); // Converter para dias
}

// Função para calcular a diferença de dias entre duas datas
int calcularDiferencaDeDias(const string &dataInicio, const string &dataFim)
{
    int diasInicio = converterDataParaDias(dataInicio);
    int diasFim = converterDataParaDias(dataFim);
    return diasFim - diasInicio;
}

float Aluguel::calcular_valor_final()
{
    int diasAlugados = calcularDiferencaDeDias(data_inicio, data_devolucao);
    return diasAlugados * veiculo->getPrecoPorDay() - desconto + adicional;
}

void Aluguel::setDataDevolucao(string data)
{
    data_devolucao = data; // dd/mm/aaaa
}

void Aluguel::setDataInicio(string data)
{
    data_inicio = data;
}

void Aluguel::setDataTermino(string data)
{
    data_termino = data;
}

void Aluguel::setVeiculo(Veiculo *veiculo)
{
    this->veiculo = veiculo;
}

void Aluguel::setCliente(Cliente *cliente)
{
    this->cliente = cliente;
}