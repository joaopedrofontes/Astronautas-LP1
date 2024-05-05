#ifndef ASTRONAUTAS_H
#define ASTRONAUTAS_H

#include <string>
#include <vector>

class Astronauta {
private:
    std::string cpf;
    std::string nome;
    int idade;
    bool estaDisponivel;
    bool estaVivo;
    std::vector<std::string> voosQueParticipou; 

public:
    Astronauta();
    bool getEstaVivo();
    bool getEstaDisponivel();
    std::string getCpf();
    std::string getNome();
    int getIdade();
    void morrer();
    void setEstaDisponivel(bool x);
    void adicionarVooQueParticipou(std::string codigo);
    void listarVoos();
};

#endif 
