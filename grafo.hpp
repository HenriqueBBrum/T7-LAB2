#ifndef GRAFO_HPP_INCLUDED
#define GRAFO_HPP_INCLUDED

#include<iostream>
#include<list>
#include<queue>
#include<map>

struct Ponto{
    float x;
    float y;
};

struct Vertice{
    Ponto ponto;///Identificador no Mapa
    Vertice* ant;
    int dist;
    enum COLOR{BRANCO, CINZA, PRETO} cor;
    std::list<Vertice> adj;
};

struct Grafo{
    std::map<Ponto, Vertice*> grafo;
    std::map<Ponto, Vertice*>::iterator it;

    void busca_largura_lab(Vertice* saida, Vertice* entrada);

    Vertice* busca_vertice(Ponto p);

    void caminho_curto(Ponto fonte,Ponto destino);

    Vertice* busca_vertice_lista(std::list<Vertice*> lista, Vertice* desejado);

    void busca_largura_ed(Vertice* entrada, Vertice* saida);
};


#endif // GRAFO_HPP_INCLUDED
