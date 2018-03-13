// PosicioCercle.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
#include"Cercle.h"
using namespace std;

int main()
{
	unsigned countador = 0;
	unsigned interiors = 0;
	unsigned secants = 0;
	bool trobat = false;
	Cercle cercle1;
	cercle1.readAtributs(countador);
	Cercle cercle2;
	cercle2.readAtributs(countador);
	while (!trobat) {
		if (cercle1.Interior(cercle2)) {
			cout << "Interior" << endl;
			interiors++;
		}
		else if (cercle1.exterior(cercle2)) {
			cout << "Exterior" << endl;
			trobat=true;
		}
		else if (cercle1.secants(cercle2)) {
			cout << "Secant" << endl;
			secants++;
		}
		if (!trobat) {
			cercle1 = cercle2;
			cercle2.readAtributs(countador);
		}
	}

	cout << "Nombre total de circumferències: "<< countador << endl;
	cout << "Parelles de circumferències interiors:  "<<interiors<< endl;
	cout << "Parelles de circumferències secants: "<<secants<< endl;


    return 0;
}

