#include "TICcarRENTAL.hpp"
// #include <vector>
using namespace std;

// Implementação do construtor da classe Funcionario
    Funcionario::Funcionario(string CPF, string nome, string endereco, string telefone, string CNH_funcionario)
    : Usuario(CPF, nome, endereco, telefone)
    {
    setCNH_funcionario(CNH_funcionario);
    }

     Aluguel Funcionario::alugarVeiculo(Cliente *pCliente,Veiculo *pVeiculo, string dataInicio, string dataTermino, Aluguel &a){
    a.setCliente(pCliente);
    a.setVeiculo(pVeiculo);
    a.setDataInicio(dataInicio);
    a.setDataTermino(dataTermino);
    historicoAlugueis.push_back(a); // adiciona o aluguel criado ao historico
    return a;
    }
    
    void Funcionario::finalizarAluguel(Aluguel *aluguel, string dataTermino){
    aluguel->setDataDevolucao(dataTermino);
    }

    void Funcionario::setCNH_funcionario(string CNH_funcionario){
    this->CNH_funcionario = CNH_funcionario;
    }