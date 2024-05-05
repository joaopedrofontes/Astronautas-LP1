#ifndef SISTEMA_H
#define SISTEMA_H

#include "astronautas.h"
#include "voo.h"

class Sistema {
    private:
        std::vector<Astronauta> listaAstronautas;
        std::vector<Voo> listaVoo;
    public:
        Sistema();
        void cadastrarAstronauta();
        void cadastrarVoo(); 
        void adicionarTripulanteEmVoo();
        void removerTripulanteDevoo();
        void listarTripulantesDeVoo();
        void iniciarUmVoo();
        void finalizarUmVoo();
        void explodirUmVoo();
        void listarAstronautasMortos();
        void listarTodosOsVoos();
};

#endif