/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   atacante.h
 * Author: victorpereira
 *
 * Created on 20 de Março de 2019, 02:18
 */

#ifndef ATACANTE_H
#define ATACANTE_H
#include "player.h"

class Atacante : public Player {
private:
    int golsMarcados;

protected:
    int getGols()const;
public:

    Atacante(string nome, int idade = 0, int golsMarcados = 0);
    //int getGols()const;
    void setGols(int g); //IMPLEMENTAR




};


#endif /* ATACANTE_H */

