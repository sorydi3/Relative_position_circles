#pragma once
#include "Punt2D.h"
#include<iostream>
using namespace std;
class Cercle
{
public:
	//CONSTRUCTOR
	Cercle();
	//CONSULTOR
	bool Interior(Cercle c) const;
	bool exterior(Cercle c) const;
	bool secants(Cercle c)const;
	Punt2D getCentre()const;
	double getRadi() const;
	void Atributs() const;
	//MODIFICADOR
	void readAtributs(unsigned &n);
private:
	//atributs classe Cercle;
	Punt2D _centre;
	double _radi;
};

