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

class Usuario{
    private:
        string CPF;
        string nome;
        string endereco;
        string telefone;
    public:
        Usuario(string CPF, string nome, string endereco, string telefone);
        void adicionarUsuario(string CPF, string nome, string endereco, string telefone);
        void setCPF(string CPF);
        string getCPF();
        void setNome(string nome);
        string getNome();
        void setEndereco(string endereco);
        string getEndereco();
        void setTelefone(string telefone);
        string getTelefone();
        void exibir_dados();
};

class Cliente : public Usuario
{
    string CNH_cliente;
};

class Funcionario : public Usuario
{
    string CNH_funcionario;
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

class Aluguel : public Veiculo {
    string id;
    Veiculo veiculo;
    Cliente cliente;
    Funcionario funcionario;
    string data_inicio;
    string data_termino;
    string data_devolucao;
    float desconto;
    float adicional;

    float calcular_valor_final();
    void setVeiculo(Veiculo &veiculo);
    void setCliente(Cliente &cliente);
    void setDataInicio(string data);
    void setDataTermino(string data);
    void setDataDevolucao(string data);

};

#endif
#endif
#endif
#endif
#endif
