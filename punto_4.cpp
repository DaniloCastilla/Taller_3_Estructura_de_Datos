/*
 * Punto4.cpp
 *
 *  Created on: 26 nov. 2017
 *      Author: Danicas99
 */

#include "Punto4.h"

#include<iostream>
#include <string>
#include <sstream>

using namespace std;

string NumberToString(int pNumber)
{
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}

int main (int argc, char* argv[]){

int m = 0 ;
cout << "ingrese las dimenciones de la Matriz: ";
cin >> m ;
int matriz [m][m];
int matrizB [m][m];

	for (int i=0;i<m;i++){
		for(int j=0;j<m;j++){
		cout << "ingrese el dato: ";
		cin >> matriz[i][j];
		}
	}
	string x;
	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + "[" + NumberToString(matriz[i][j])+ "]";
		}
		cout << x + "\n";
	}

	for (int i=0;i<m;i++){
		for(int j=0;j<m;j++){
		matrizB [j][i]=matriz[j][i];
		}
	}

	cout << "\n\nEspejo: \n\n";

	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + "[" + NumberToString(matrizB[j][i])+ "]";
		}
		cout << x + "\n";
	}
}

