//
// Created by 2003j on 09/10/2025.
//

#ifndef FERRAMENTA_H
#define FERRAMENTA_H

class Ferramenta {
protected:
    int numeroSerie;
    int posLinha, posColuna;
    char charRepresentacao;

public:
    Ferramenta(int linha, int coluna, char representacao);
    virtual ~Ferramenta() = default;
    virtual char getCharRepresentacao() const = 0;
};



#endif