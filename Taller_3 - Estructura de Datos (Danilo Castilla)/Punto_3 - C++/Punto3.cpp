/*
 * Punto3.cpp
 *
 *  Created on: 26 nov. 2017
 *      Author: Danicas99
 */

#include "Punto3.h"

#include<iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

string NumberToString(int pNumber) //Convert numbers to string to be able to print
{
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}//end convertion

int main(int argc, char* argv[]){ //Main method
int m = 0 ;
int npar = 0 ;
int nimpar = 0;
int npos = 0;
int nneg = 0 ;

	string cpar, cimpar, cpos, cneg, x;
	cout << "ingrese las dimenciones de la Matriz: " + "\n";
	cin >> m ;
	int matriz [m][m];
	cout <<"los numeros aleatorios son: \n\n";

	for (int i= 0 ;i<m ;i++){
		for (int j= 0 ;j<m ;j++){
			matriz[i][j] = rand()% 50 - 10;
		}
	}

	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + "[" + NumberToString(matriz[i][j])+ "]";
		}
		cout << x + "\n";
	}

	for(int i = 0;i<m;i++){ //Cycle for to find the requirements
		for(int j = 0; j<m;j++){
			if(matriz[i][j]%2 == 0){
				npar++;
				cpar = cpar + NumberToString(matriz[i][j]) + ",";
			}
			else if (matriz[i][j]%2 != 0){
				nimpar ++ ;
				cimpar = cimpar+ NumberToString(matriz[i][j]) + ",";
			}
			if(matriz[i][j]< 0 ){
				nneg ++;
				cneg = cneg + NumberToString(matriz[i][j]) + ",";
			}
			else if(matriz[i][j]>= 0){
				npos++;
				cpos = cpos + NumberToString(matriz[i][j]) + ",";
			}
		}
	}
	cout <<"\n\nla cantidad de numeros pares encontrados son: " + NumberToString(npar )+ "\n\n";
	cout <<"la cantidad de numeros impares encontrados son: " + NumberToString(nimpar) + "\n\n";
	cout <<"la cantidad de numeros negativos encontrados son: " + NumberToString(nneg) + "\n\n";
	cout <<"la cantidad de numeros positivos encontrados son: " + NumberToString(npos) + "\n\n";
	cout <<"los numeros pares encontrados son: "+ cpar + "\n\n";
	cout <<"los numeros impares encontrados son:" + cimpar + "\n\n";
	cout <<"los numeros negativos encontrados son:" + cneg + "\n\n";
	cout <<"los numeros positivos encontrados son:" + cpos + "\n\n";

}//end Main

