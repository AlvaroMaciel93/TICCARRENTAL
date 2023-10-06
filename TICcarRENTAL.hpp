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
    string CPF;
    string nome;
    string endereco;
    string telefone;
};

class Cliente : public Usuario{
    string CNH_cliente;

};

class Funcionario : public Usuario{
    string CNH_funcionario;
};

class Veiculo {
    string placa;
    string marca;
    string modelo;
    int anodefabricacao;
    float precoporday;
};

class Aluguel {
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
};

#endif
#endif
#endif
#endif
#endif