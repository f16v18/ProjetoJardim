#ifndef PROJETO_POSICAOSOLO_H
#define PROJETO_POSICAOSOLO_H

#include "Settings.h"
#include <random>
#include <chrono>

// Forward declarations
class Planta;
class Ferramenta;

class PosicaoSolo {
private:
    int agua;
    int nutrientes;
    Planta* planta;
    Ferramenta* ferramenta;

public:
    PosicaoSolo();
};

#endif //PROJETO_POSICAOSOLO_H