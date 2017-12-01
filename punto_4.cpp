//============================================================================
// Name        : Punto_4.cpp
// Author      : Danicas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <conio.h>

 using namespace std;

 int main(){//Main method

	 	int x;
	  	string Cadena;
	    vector<int> v;
	    cout <<"ingrese el tamaño de la matriz: " << endl;
	    cin >> x;
	    int Vector[x*x];
	    int Vector_2[100][100];
	    int tamain = (sizeof Vector/sizeof * Vector);
	    cout << "Digite la cadena de caracteres separado por comas: \n";
	    cin >> Cadena;

	    stringstream Separated(Cadena);

	    int i;

	    while (Separated >> i){
	         	 v.push_back(i);
	         if (Separated.peek() == ',')//Separated with Comas
	        	 Separated.ignore();
	    }//end While

	    int Tm = v.size();

	    for (i=0; i< Tm; i++){

	     	Vector[i] = v.at(i);

	    }

	    cout<<endl;
	    int c = 0;
	    do{
	    for (int i = 0; i < x; i++){

			for (int j = 0; j < x ; j++) {

				Vector_2[i][j] = Vector[c];
				c++;
			}

		}

	  }while(c<tamain);

	    for (int k = 0; k < x; k++) {
	    	for (int j = 0; j < x; j++) {
	    		cout << "["<<Vector_2[k][j]<<"]";

	    			}

	    	cout<<endl;

	    	}

	    cout << endl;
	    cout << "Matriz Transpuesta"<<endl;

	    for (int k = 0; k < x; k++) {
	    	 for (int j = 0; j < x; j++) {
	    	    cout << "["<<Vector_2[j][k]<<"]";

	    	   }

	    	   cout<<endl;

	    	}

	    getch();
	    return 0;

 }
