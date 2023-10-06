#include "TICcarRENTAL.hpp"
//#include <vector>
using namespace std;

     Aluguel Funcionario::alugarVeiculo(Cliente *pCliente,Veiculo *pVeiculo, string dataInicio, string dataTermino, Aluguel &a){
        a.setCliente(pCliente);
        a.setVeiculo(pVeiculo);
        a.setDataInicio(dataInicio);
        a.setDataTermino(dataTermino);
        historicoAlugueis.push_back(a); //adiciona o aluguel criado ao historico
        return a;
    }
    
    void Funcionario::finalizarAluguel(Aluguel *aluguel, string dataTermino){
        aluguel->setDataDevolucao(dataTermino);
    }