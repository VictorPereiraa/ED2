#include <iostream>
#include <cstddef> // Para usar o NULL
#include "hash.h" 

Hash::Hash(int size) {
    MAX_ITEMS = size;
    cadastro = new Account*[size];

    for (int i = 0; i < size; i++) {
        cadastro[i] = NULL;
    }
    length = 0;
}

int Hash::getLength() const {
    return length;

}

void Hash::retrieveItem(Account& account, bool& found) {
    int location =  player.getHash(MAX_ITEMS);
    if(cadastro[location]==NULL){
        found = false;
    }else{
        found = true;
        player = *cadastro[location];
    }
}

void Hash::insertItem(Account account) {
    int location = player.getHash(MAX_ITEMS);
    cadastro[location] = new Player(player);
    lenght++;
}

void Hash::deleteItem(Account account) {
    int location = player.getHash(MAX_ITEMS);
    delete cadastro[location];
    cadastro[location] = NULL;
    lenght--;
}

void Hash::print() const {
    std::cout << "INI" << std::endl;
    for (int i = 0; i < MAX_ITEMS; i++) {
        Account* acc = cadastro[i];
        if (acc != NULL) {
            std::cout << i << ":" << acc->getAccountNumber() << ", " << acc->getBalance() << std::endl;
        }
    }
    std::cout << "FIM" << std::endl;
}
