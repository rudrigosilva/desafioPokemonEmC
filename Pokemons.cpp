#include <iostream>
#include "Pokemons.h"

using namespace std;

class Pokemons::Pokemons(){
    this->nome = "";
    this->tipo = "";
    this->poder = 0;

};

void Pokemons::setNome (string nome){
    this->nome = nome;
};
string Pokemons::getNome(){
    return nome;
};

void Pokemons::setTipo (string tipo){
    this->tipo = tipo;
};
string Pokemons::getTipo(){
    return tipo;
};

void Pokemons::setPoder (int poder){
    this->poder = poder;
};
int Pokemons::getPoder(){
    return poder;
}