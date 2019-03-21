/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <iomanip>
#include "carreira.h"


Carreira::Carreira(string nome,int totalDePartidas):Player(nome){
    this->nome = nome;
    this->totalDePartidas = totalDePartidas;
}

int Carreira::getTotalDePartidas() const{
    return totalDePartidas;
}

float Carreira::aproveitamento() const{
    return totalDePartidas / 38;
}

void Carreira::setTotalDePartidas(int i){
    totalDePartidas = i;
}

void Carreira::printTemporada() const{
    cout<< fixed<< setprecision(2);
    cout<< "Nome: "<< nome << endl;
    cout<< "Time: "<< getTime() << endl;
    cout<< "Partidas: "<< getTotalDePartidas() << endl;
    cout<< "Aproveitamento: "<< aproveitamento() << endl;
    
}


