/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "hash.h"
#include "player.h"

using namespace std;



int main(){
  Hash hash;
    hash.print();
  int nomes[5] = {Joao,Mario,Jonas,Lucas,Alberto};
  int idades[5] = {23,34,28,19,33}; 
  int times[5] = {Sao Paulo,Palmeiras,Corinthians,Cruzeiro,Flamengo};
  
  
  for (int i = 0; i < 5; i++) {
    Player player = Player(nomes[i], idades[i],times[i]);
    hash.insertItem(player);

  }

  hash.print();
  
  cout << "------------------------------" <<  endl;

  
  Player player(12704);
  bool     found = false;

  hash.retrieveItem(player, found);
  cout << player.getNome() << " -> " << found << endl;

  cout << "------------------------------" <<  endl;

  hash.deleteItem(player);

  cout << "------------------------------" <<  endl;

  hash.print();
  cout << "Fim" << endl;  
}
