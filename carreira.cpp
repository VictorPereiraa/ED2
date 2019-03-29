/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <iomanip>
#include "carreira.h"


Carreira::Carreira(string nome, int idade, float altura, string time, int totalDePartidas):Player(nome, idade, altura, time){
    this->totalDePartidas = totalDePartidas;
}

int Carreira::getTotalDePartidas() const{
    return totalDePartidas;
}

float Carreira::aproveitamento() const{
    return totalDePartidas / 38;
}

/*void Carreira::setTotalDePartidas(int i){
    totalDePartidas = i;
}*/

void Carreira::print() const{
    cout<< fixed<< setprecision(2);
    cout<< "Nome: "<< nome << endl;
    cout<< "Time: "<< getTime() << endl;
    cout<< "Partidas: "<< getTotalDePartidas() << endl;
    cout<< "Aproveitamento: "<< aproveitamento() << endl;  
}


