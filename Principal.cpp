#include <iostream>
#include "TICcarRENTAL.hpp"

int main() {
    // Criando objetos de Cliente, Funcionário e Veículo
    Cliente cliente("12345678901", "João", "Rua A, 123", "999-9999", "CNH123");
    Funcionario funcionario("98765432101", "Maria", "Rua B, 456", "888-8888", "CNH456");
    Veiculo veiculo("Ford", "Fiesta", "ABC-1234", 2020, 50.0);

    // Exibindo os dados dos objetos criados
    std::cout << "Dados do Cliente:\n";
    cliente.exibir_dados();
    
    std::cout << "\nDados do Funcionário:\n";
    funcionario.exibir_dados();

    std::cout << "\nDados do Veículo:\n";
    std::cout << veiculo.imprimeVeiculo() << std::endl;

    // Criando um objeto de Aluguel e realizando uma locação
    Aluguel aluguel("1", &veiculo, &cliente, &funcionario, "2023/10/11", "2023/10/15", "", 0, 0);

    // Calculando e exibindo o valor final do aluguel
    float valor_final = aluguel.calcular_valor_final();
    std::cout << "\nValor Final do Aluguel: $" << valor_final << std::endl;

    // Realizando a devolução do veículo
    aluguel.setDataDevolucao("2023/10/15");
    
    // Finalizando o aluguel
    funcionario.finalizarAluguel(&aluguel, "2023/10/15");

    // Exibindo os dados atualizados do aluguel
    std::cout << "\nDados do Aluguel Após a Devolução:\n";
    // Implemente um método para exibir os dados do aluguel, similar ao exibir_dados das outras classes

    return 0;
}