#include <iostream>
#include "astronautas.h"

Astronauta::Astronauta() {
    estaVivo = true;
    estaDisponivel = true;
    voosQueParticipou = {};
    std::cout << "Digite o nome do astronauta: ";
    std::getline(std::cin >> std::ws, nome);
    std::cout << "Digite o cpf dele: ";
    std::getline(std::cin >> std::ws, cpf);
    std::cout << "Digite a idade do astronauta: ";
    std::cin >> idade;
}

bool Astronauta::getEstaVivo() {
    return estaVivo;
}

bool Astronauta::getEstaDisponivel() {
    return estaDisponivel;
}
std::string Astronauta::getCpf() {
    return cpf;
}

std::string Astronauta::getNome() {
    return nome;
}

int Astronauta::getIdade() {
    return idade;
}

void Astronauta::morrer() {
    estaVivo = false;
}

void Astronauta::setEstaDisponivel(bool x) {
    estaDisponivel = x;
}

void Astronauta::adicionarVooQueParticipou(std::string codigo) {

    voosQueParticipou.push_back(codigo);

}

void Astronauta::listarVoos(){

    for(int i = 0; i < voosQueParticipou.size(); i++){
        std::cout << voosQueParticipou[i] << std::endl;
    }
}