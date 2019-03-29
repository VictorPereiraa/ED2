/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <iomanip>
#include "player.h"
using namespace std;

Player::Player(string n,int i,float a,string t): nome(n),idade(i),altura(a),time(t) {}


void Player::print() const{
    cout<< fixed<< setprecision(2);
    cout<< "Nome:"<< nome<< "Idade:"<< idade<< "Altura:"<< altura<< "Time:"<<time<<endl;
}


string Player::getNome() const{
   return nome;
}

int Player::getIdade() const{
   return idade;
}

float Player::getAltura() const{
    return altura;
}

string Player::getTime() const{
    return time; 
}
 
/*void Player::setNome(string s){
    nome = s;
}

void Player::setIdade(int i){
    idade = i;
}

void Player::setAltura(float f){
    altura = f;
}
 
void Player::setTime(string t){
    team = t;
}*/

Player::Player(const Player& obj){
    nome = obj->nome;
    idade = obj->idade;
}

int Player::getHash(int max_number)const{
    return getNome()*getIdade()*getTime() % max_number;
}
