#include "astronautas.h"
#include "voo.h"
#include "sistema.h"


int main() {
    Sistema sistema;

    int opcao;

    while(true){

        std::cout << "Escolha uma das seguintes opções: " << std::endl;
        std::cout << "(1) Finalizar programa." << std::endl;
        std::cout << "(2) Cadastrar astronauta." << std::endl;
        std::cout << "(3) Cadastrar voo." << std::endl;
        std::cout << "(4) Adicionar astronauta em voo." << std::endl;
        std::cout << "(5) Remover astronauta de um voo." << std::endl;
        std::cout << "(6) Listar astronautas de um voo." << std::endl;
        std::cout << "(7) Iniciar um voo." << std::endl;
        std::cout << "(8) Finalizar um voo." << std::endl;
        std::cout << "(9) Explodir um voo" << std::endl;
        std::cout << "(10) Listar astronautas mortos." << std::endl;
        std::cout << "(11) Listar todos os voos." << std::endl;
        std::cout << "Opção escolhida: ";
        std::cin >> opcao;

        if(opcao == 1){
            break;
        }
        else if(opcao == 2){
            sistema.cadastrarAstronauta();
        }
        else if(opcao == 3){
            sistema.cadastrarVoo();
        }
        else if(opcao == 4){
            sistema.adicionarTripulanteEmVoo();
        }
        else if(opcao == 5){
            sistema.removerTripulanteDevoo();
        }
        else if(opcao == 6){
            sistema.listarTripulantesDeVoo();
        }
        else if(opcao == 7){
            sistema.iniciarUmVoo();
        }
        else if(opcao == 8){
            sistema.finalizarUmVoo();
        }
        else if(opcao == 9){
            sistema.explodirUmVoo();
        }
        else if(opcao == 10){
            sistema.listarAstronautasMortos();
        }
        else if(opcao == 11){
            sistema.listarTodosOsVoos();
        }
        else{
            break;
        }
    }
    std::cout << "Programa finalizado." << std::endl;
    return 0;
}
