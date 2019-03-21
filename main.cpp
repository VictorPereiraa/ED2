/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: victorpereira
 *
 * Created on 20 de Março de 2019, 00:53
 */

#include <iostream>
#include <iomanip>
using namespace std;
#include "atacante.h"
#include "player.h"
#include "carreira.h"

/*
 * 
 */
//void printPlayers(Players** player,int size);


int main() {
    Player * player[5];

    cout << "Vamos adicionar 5 jogadores:" << endl;
    for (int i = 0; i < 5; i++) {
        int opcao, idade;
        string nome, time;
        float altura;

        cout << "Nome do jogador: " << endl;
        cin>>nome;
        cout << "Idade: " << endl;
        cin>>idade;
        cout << "Altura: " << endl;
        cin>>altura;
        cout << "Time: " << endl;
        cin>>time;
        cout << "Opcao: (1: adicionar gols marcados, 2:adicionar total de partidas)" << endl;
        cin>>opcao;
        if (opcao == 1) {
            int golsMarcados;
            cout << "Gols marcados: " << endl;
            cin>>golsMarcados;
            player[i] = new Atacante(nome, idade, golsMarcados);
        } else if (opcao == 2) {
            int totalDePartidas;
            cout << "Numero de partidas: " << endl;
            cin>>totalDePartidas;
            player[i] = new Carreira(nome, totalDePartidas);
        }
    }
    
   // printPlayers(player,5);
    
    return 0;
}

