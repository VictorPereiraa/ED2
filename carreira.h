/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   carreira.h
 * Author: victorpereira
 *
 * Created on 20 de Março de 2019, 02:55
 */

#ifndef CARREIRA_H
#define CARREIRA_H
#include "player.h"

class Carreira : public Player {
private:
    int totalDePartidas;
    
public:
    Carreira(string nome,int totalDePartidas = 0);
    
    int getTotalDePartidas()const;
    float aproveitamento()const;      //Partidas jogadas / Temporada
    void setTotalDePartidas(int i);
    
    void printTemporada()const;  
    
};

#endif /* CARREIRA_H */

