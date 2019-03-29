/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hash.h
 * Author: victorpereira
 *
 * Created on 28 de Março de 2019, 20:57
 */

#ifndef HASH_H
#define HASH_H


#include <iostream>
#include <string>
#include "player.h"

class Hash {
private:
    int MAX_ITEMS;
    int length;
    Player** cadastro;
    
public:
    Hash(int size = 20);
    int getLength() const;
    void retrieveItem(Account& account, bool& found);
    void insertItem(Account account);
    void deleteItem(Account account);
    void print() const;
    
};

#endif
