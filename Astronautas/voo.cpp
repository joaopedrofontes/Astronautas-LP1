#include "voo.h"

Voo::Voo(){
    estaEmPlanejamento = true;
    estaVoando = false;
    estaFinalizado = false;
    explodiu = false;
    tripulantes = {};
    std::cout << "Digite o código do voo: ";
    std::cin >> codigo;
}


bool Voo::getEstaVoando(){
    return estaVoando;
}

bool Voo::getEstaEmPlanejamento(){
    return estaEmPlanejamento;
}

bool Voo::getEstaFinalizado(){
    return estaFinalizado;
}

std::string Voo::getCodigo(){
    return codigo;
}

void Voo::adicionarTripulante(std::vector<Astronauta> &listaDeAstronautas){
    
    std::string auxCpf;
    
    std::cout << "Digite o cpf do astronauta a ser adicionado: ";
    std::cin >> auxCpf;

    for(int i = 0; i < listaDeAstronautas.size(); i++) {

        if(auxCpf == listaDeAstronautas[i].getCpf()
        && listaDeAstronautas[i].getEstaDisponivel() == true
        && listaDeAstronautas[i].getEstaVivo() == true) {

            tripulantes.push_back(&listaDeAstronautas[i]);
            return;

        }
    }

    std::cout << "Astronauta não está disponível ou está morto." << std::endl;

}

void Voo::removerTripulante(){

    std::string auxCpf;
    
    std::cout << "Digite o cpf do astronauta a ser removido: ";
    std::cin >> auxCpf;

    for(int i = 0; i < tripulantes.size(); i++){
        if(auxCpf == tripulantes[i]->getCpf()){
            tripulantes.erase(tripulantes.begin() + i);
            return;
        }
    }
}

void Voo::listarTripulantes(){
    for(int i = 0; i < tripulantes.size(); i++){
        std::cout << "Nome: " << tripulantes[i]->getNome() << std::endl;
        std::cout << "Cpf: " << tripulantes[i]->getCpf() << std::endl;
    }
}

void Voo::iniciarVoo(){

    if(tripulantes.size() == 0){
        std::cout << "O voo não pôde ser iniciado pois não há astronautas nele." << std::endl;
        return;
    }

    for(int i = 0; i < tripulantes.size(); i ++){
        if(tripulantes[i]->getEstaDisponivel() == false
        || tripulantes[i]->getEstaVivo() == false){
            std::cout << "O astronauta " << tripulantes[i]->getNome() << " não está disponível." << std::endl;
            return;
        }
    }

    for(int i = 0; i < tripulantes.size(); i ++){
        tripulantes[i]->setEstaDisponivel(false);
    }

    setEstaVoando(true);
    setEstaEmPlanejamento(false);
    std::cout << "Voo iniciado com sucesso." << std::endl;
}

void Voo::finalizarVoo(){

    for(int i = 0; i < tripulantes.size(); i++){
        tripulantes[i]->setEstaDisponivel(true);
        tripulantes[i]->adicionarVooQueParticipou(codigo);
    }

    setEstaVoando(false);
    setEstaFinalizado(true);
    std::cout << "Voo finalizado com sucesso." << std::endl;
}

void Voo::explodirVoo(){
    if(estaVoando == false){
        return;
    }
	for(int i = 0; i < tripulantes.size(); i++){
		tripulantes[i]->morrer();
        tripulantes[i]->setEstaDisponivel(false);
        tripulantes[i]->adicionarVooQueParticipou(codigo);
	}

	explodiu = true;
    estaVoando = false;
    estaFinalizado = true;
}

	

void Voo::setEstaVoando(bool x) {
    estaVoando = x;
}

void Voo::setEstaEmPlanejamento(bool x) {
    estaEmPlanejamento = x;
}

void Voo::setEstaFinalizado(bool x) {
    estaFinalizado = x;
}

