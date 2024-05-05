#ifndef VOO_H
#define VOO_H

#include <iostream>
#include <string>
#include <vector>
#include "astronautas.h"

class Voo {
    private:
        bool estaEmPlanejamento;
        bool estaVoando;
        bool estaFinalizado;
        bool explodiu;
        std::string codigo;
        std::vector<Astronauta*> tripulantes;

    public:
        Voo();
        bool getEstaVoando();
        bool getEstaEmPlanejamento();
        bool getEstaFinalizado();
        std::string getCodigo();
        void adicionarTripulante(std::vector<Astronauta> &listaDeAstronautas);
        void removerTripulante();
        void listarTripulantes();
        void iniciarVoo();
        void finalizarVoo();
	    void explodirVoo();

        void setEstaVoando(bool x);
        void setEstaEmPlanejamento(bool x);
        void setEstaFinalizado(bool x);
        
        

};


#endif
