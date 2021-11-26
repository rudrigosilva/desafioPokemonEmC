#include <iostream>


using namespace std;

class Pokemons{
    public: //assinatura dos metodos
    Pokemons(); //construtor da classe
    
    void setNome(string nome); //gets e sets dos metodos
    string getNome();
    void setTipo(string tipo);
    string getTipo();
    void setPoder(int poder);
    int getPoder();

    private: //atributos
    string nome;
    string tipo;
    int poder;

};