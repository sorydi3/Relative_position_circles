//#include "stdafx.h"
#include "Cercle.h"
#include<cmath>
#include<iostream>
using namespace std;

Cercle::Cercle()
{
	_centre = Punt2D(0,0);
	_radi = 1;
}

void Cercle::readAtributs(unsigned &n)
{
	cout << "Entra el centre de la circumferència, x y:" << endl;
	_centre.llegir();
	cout << "Entra el radi [r>0]:" << endl;
	cin >> _radi;
	n++;
}
double Cercle:: getRadi() const{
	return _radi;
}
bool Cercle::exterior(Cercle c) const {
	double distancia = _centre.distancia(c._centre);
	return distancia > _radi + c.getRadi();
}

bool Cercle::secants(Cercle c) const {
	double distancia = _centre.distancia(c._centre);
	return distancia < _radi + c.getRadi();
}

bool Cercle::Interior(Cercle c) const {
	//tenir en combe quin es el cercle gran
	double distancia = _centre.distancia(c._centre);
	return distancia < abs(_radi - c.getRadi());
}