//
// Created by 2003j on 09/10/2025.
//

#ifndef PLANTA_H
#define PLANTA_H

class Planta {
protected:
    int id;
    int posLinha, posColuna;
    char charRepresentacao;

public:
    Planta(int linha, int coluna, char representacao);
    virtual ~Planta() = default;
    virtual char getCharRepresentacao() const = 0;
};

#endif