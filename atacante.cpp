/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "atacante.h"

Atacante::Atacante(string nome,int idade,int golsMarcados):Player(nome,idade){
    this->nome = nome;
    this->idade = idade;
    this->golsMarcados = golsMarcados;
}
    
int Atacante::getGols() const{
    return golsMarcados;
}

void Atacante::setGols(int g){
    golsMarcados = g;
}