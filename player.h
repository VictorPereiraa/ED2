/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   jogador.h
 * Author: victorpereira
 *
 * Created on 20 de Março de 2019, 01:00
 */

#ifndef JOGADOR_H
#define JOGADOR_H

#include<string>
using namespace std;

class Player {
private:
    float altura;
    string time;

protected:
    string nome;
    int idade;
    
public:
    Player(string nome = "A", int idade = 0, float altura = 0.0, string time = "B");
    string getNome()const;
    int getIdade()const;    
    float getAltura()const; 
    string getTime()const;

    void setNome(string s);
    void setIdade(int i);
    void setAltura(float f);
    void setTime(string t);
    
    void print()const;

};


#endif /* JOGADOR_H */

