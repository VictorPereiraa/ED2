/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "atacante.h"

using namespace std;

Atacante::Atacante(string nome, int idade, float altura, string time, int golsMarcados):Player(nome,idade, altura, time){
    this->golsMarcados = golsMarcados;
}
    
int Atacante::getGols() const{
    return golsMarcados;
}

/*void Atacante::setGols(int g){
    golsMarcados = g;
}*/

void Atacante::print() const{ 
    cout<< "Nome: "<< nome << endl;
    cout<< "Time: "<< getTime() << endl;
    cout<< "Gols: "<< getGols() << endl;  
}

Atacante::Atacante(const Atacante& obj){
    nome = obj->nome;
    idade = obj->idade;
    time = obj->time;
    golsMarcados = obj->golsMarcados;
}

int Atacante::getHash(int max_number)const{
    return getNome()*getIdade()*getTime() % max_number;
}
