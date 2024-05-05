#include "sistema.h"


Sistema::Sistema(){
    listaAstronautas = {};
    listaVoo = {};
    std::cout << "Sistema iniciado" << std::endl;
}

void Sistema::cadastrarAstronauta(){
    listaAstronautas.resize(listaAstronautas.size() + 1);
}

void Sistema::cadastrarVoo(){
    listaVoo.resize(listaVoo.size() + 1);
}

void Sistema::adicionarTripulanteEmVoo(){
    std::string auxCodigo;

    std::cout << "Digite o código do voo em que será adicionado o astronauta: ";
    std::cin >> auxCodigo;

    for(int i = 0; i < listaVoo.size(); i++){
        if(auxCodigo == listaVoo[i].getCodigo()){
            listaVoo[i].adicionarTripulante(listaAstronautas);
            return;
        }
    }
	std::cout << "Voo não encontrado." << std::endl;

}

void Sistema::removerTripulanteDevoo(){
    std::string auxCodigo;

    std::cout << "Digite o código do voo em que será removido o astronauta: ";
    std::cin >> auxCodigo;

    for(int i = 0; i < listaVoo.size(); i++){
        if(auxCodigo == listaVoo[i].getCodigo()){
            listaVoo[i].removerTripulante();
            return;
        }
    }
}

void Sistema::listarTripulantesDeVoo(){
    std::string auxCodigo;

    std::cout << "Digite o código do voo em que será listado os astronautas: ";
    std::cin >> auxCodigo;

    for(int i = 0; i < listaVoo.size(); i++){
        if(auxCodigo == listaVoo[i].getCodigo()){
            listaVoo[i].listarTripulantes();
            return;
        }
    }

}

void Sistema::iniciarUmVoo(){
    std::string auxCodigo;
    
    std::cout << "Digite o código do voo que será iniciado: ";
    std::cin >> auxCodigo;

    for(int i = 0; i < listaVoo.size(); i++){
        if(auxCodigo == listaVoo[i].getCodigo()){
            listaVoo[i].iniciarVoo();
            return;
        }
    }
}

void Sistema::finalizarUmVoo() {
    std::string auxCodigo;
    
    std::cout << "Digite o código do voo que será finalizado: ";
    std::cin >> auxCodigo;

    for(int i = 0; i < listaVoo.size(); i++){
        if(auxCodigo == listaVoo[i].getCodigo()){
            listaVoo[i].finalizarVoo();
        
            break;
        }
    }
}

void Sistema::explodirUmVoo(){
	std::string auxCodigo;

	std::cout << "Digite o código do voo que irá explodir: ";
	std::cin >> auxCodigo;

	for(int i = 0; i < listaVoo.size(); i++){
		if(auxCodigo == listaVoo[i].getCodigo()){
			listaVoo[i].explodirVoo();
			return;
		}
	}
}

void Sistema::listarAstronautasMortos(){
    std::cout << "Astronautas mortos: " << std::endl;
    for(int i = 0; i < listaAstronautas.size(); i++){
        if(listaAstronautas[i].getEstaVivo() == false){
            std::cout << "Nome: " << listaAstronautas[i].getNome() << std::endl;
            std::cout << "cpf: " << listaAstronautas[i].getCpf() << std::endl;
            std::cout << "Voos que participou: " << std::endl;
            listaAstronautas[i].listarVoos();
        }
    }
}

void Sistema::listarTodosOsVoos(){
    for(int i = 0; i < listaVoo.size(); i++){
        std::cout << "Voo " << listaVoo[i].getCodigo() << std::endl;
        std::cout << "Status: ";
        if(listaVoo[i].getEstaEmPlanejamento()){
            std::cout << "Em planejamento" << std::endl;
        }
        if(listaVoo[i].getEstaVoando()){
            std::cout << "Voando" << std::endl;
        }
        if(listaVoo[i].getEstaFinalizado()){
            std::cout << "Finalizado" << std::endl;
        }

        std::cout << "Tripulantes do Voo: " << std::endl;
        
        listaVoo[i].listarTripulantes();
    }
}
