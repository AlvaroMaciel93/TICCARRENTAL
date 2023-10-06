#include <iostream>
#include <string>
#include <vector>

#ifndef usuario_H
#define usuario_H
#ifndef veiculo_H
#define veiculo_H
#ifndef aluguel_H
#define aluguel_H
#ifndef funcionario_H
#define funcionario_H
#ifndef cliente_H
#define cliente_H

using namespace std;

class Usuario;
class Cliente;
class Aluguel;
class Funcionario;
class Veiculo;

class Usuario
{
    string CPF;
    string nome;
    string endereco;
    string telefone;

    public:
    Usuario(string CPF, string nome, string endereco, string telefone){};
};

class Cliente : public Usuario
{
    string CNH_cliente;
    vector<Aluguel> historicoAlugueis;
    public:
    // Construtor da classe Cliente
    Cliente(std::string CPF, std::string nome, std::string endereco, std::string telefone, std::string CNH_cliente);
    void setCNH_cliente(string CNH_cliente);
};

class Funcionario : public Usuario
{
    string CNH_funcionario;
    vector<Aluguel> historicoAlugueis;

public:
    Aluguel alugarVeiculo(Cliente *pCliente, Veiculo *pVeiculo, string DataInicio, string DataTermino, Aluguel &a);
    void finalizarAluguel(Aluguel *aluguel, string dataTermino);
};

class Veiculo
{
    string identificador;
    string placa;
    string marca;
    string modelo;
    int anodefabricacao;
    float precoporday;

public:
    Veiculo(string marca, string modelo, string placa, int anodefabricacao, float precoporday);
    void setPlaca(string placa);
    string getPlaca();
    void setMarca(string marca);
    string getMarca();
    void setModelo(string modelo);
    string getModelo();
    void setAnoFabricacao(int anoFabricacao);
    int getAnoFabricacao();
    void setPrecoPorDay(float precoporday);
    float getPrecoPorDay();
    string imprimeVeiculo();
};

class Aluguel : public Veiculo
{
    string id;
    Veiculo *veiculo;
    Cliente *cliente;
    Funcionario *funcionario;
    string data_inicio;
    string data_termino;
    string data_devolucao;
    float desconto;
    float adicional;

public:
    float calcular_valor_final();
    void setVeiculo(Veiculo *veiculo);
    void setCliente(Cliente *cliente);
    void setDataInicio(string data);
    void setDataTermino(string data);
    void setDataDevolucao(string data);
};

#endif
#endif
#endif
#endif
#endif