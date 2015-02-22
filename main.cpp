#include <iostream>
#include <cstdint>
using namespace std;


//Fonctions additions
int32_t addition(int32_t opA,int32_t opB){
	return opA + opB;
}

int64_t addition(int64_t opA,int64_t opB){
	return opA + opB;
}

float addition(float opA, float opB){
	return opA + opB;
}

double addition(double opA, double opB){
	return opA + opB;
}


//---------------------------------------

//Fonctions soustraction
int32_t soustraction(int32_t opA, int32_t opB){
	return opA - opB;
}

int64_t soustraction(int64_t opA, int64_t opB){
	return opA - opB;
}

float soustraction(float opA, float opB){
	return opA - opB;
}

double soustraction(double opA, double opB){
	return opA - opB;
}


//---------------------------------------

//Fonctions multiplication
int32_t multiplication(int32_t opA, int32_t opB){
	return opA * opB;
}

int64_t multiplication(int64_t opA, int64_t opB){
	return opA * opB;
}

float multiplication(float opA, float opB){
	return opA * opB;
}

double multiplication(double opA, double opB){
	return opA * opB;
}


//---------------------------------------

//Fonctions division
int32_t division(int32_t opA, int32_t opB){
	return opA / opB;
}

int64_t division(int64_t opA, int64_t opB){
	return opA / opB;
}

float division(float opA, float opB){
	return opA / opB;
}

double division(double opA, double opB){
	return opA / opB;
}


//---------------------------------------

//Fonctions modulo
int32_t modulo(int32_t opA, int32_t opB){
	return opA % opB;
}

int64_t modulo(int64_t opA, int64_t opB){
	return opA % opB;
}



int main(){


char rep1,rep2;
cout << "Veuillez saisir le type de nombre désiré : \na - int\nb - float\nc - double" << endl;
cin >> rep1;

switch(rep1) {
case 'a' : 
	cout << "Veuillez saisir l'opérateur désiré : \na - Addition\nb - Soustraction\nc - Multiplication\nd - Division\ne - Modulo" << endl;
	cin >> rep2;
	int a,b;
	cout << "\n\nVeuillez saisir le premier nombre : ";
	cin >> a;
	cout << "\n\nVeuillez saisir le second nombre : ";
	cin >> b;

	if (rep2 == 'a'){	
	cout << " \n\nRésultat : " << addition(a,b);
	
	}

	if (rep2 == 'b'){	
	cout << " \n\nRésultat : " << soustraction(a,b);
	
	}

	if (rep2 == 'c'){	
	cout << " \n\nRésultat : " << multiplication(a,b);
	
	}

	if (rep2 == 'd'){	
	cout << " \n\nRésultat : " << division(a,b);
	
	}

	if (rep2 == 'e'){	
	cout << " \n\nRésultat : " << modulo(a,b);
	
	}

	else cout << "Veuillez saisir un caractère du menu !!!" << endl;
	break;
case 'b' :
	cout << "Veuillez saisir l'opérateur désiré : \na - Addition\nb - Soustraction\nc - Multiplication\nd - Division\ne - Modulo" << endl;
	cin >> rep2;
	float c,d;
	cout << "\n\nVeuillez saisir le premier nombre : ";
	cin >> c;
	cout << "\n\nVeuillez saisir le second nombre : ";
	cin >> d;

	if (rep2 == 'a'){	
	cout << " \n\nRésultat : " << addition(c,d);;
	
	}

	if (rep2 == 'b'){	
	cout << " \n\nRésultat : " << soustraction(c,d);;
	
	}

	if (rep2 == 'c'){	
	cout << " \n\nRésultat : " << multiplication(c,d);
	
	}

	if (rep2 == 'd'){	
	cout << " \n\nRésultat : " << division(c,d);
	
	}

	else cout << "Veuillez saisir un caractère du menu !!!" << endl;
	break;
case 'c' :
	cout << "Veuillez saisir l'opérateur désiré : \na - Addition\nb - Soustraction\nc - Multiplication\nd - Division\ne - Modulo" << endl;
	cin >> rep2;
	double e,f;
	cout << "\n\nVeuillez saisir le premier nombre : ";
	cin >> e;
	cout << "\n\nVeuillez saisir le second nombre : ";
	cin >> f;

	if (rep2 == 'a'){	
	cout << " \n\nRésultat : " << addition(e,f);
	
	}

	if (rep2 == 'b'){	
	cout << " \n\nRésultat : " << soustraction(e,f);
	
	}

	if (rep2 == 'c'){	
	cout << " \n\nRésultat : " << multiplication(e,f);
	
	}

	if (rep2 == 'd'){	
	cout << " \n\nRésultat : "<< division(c,d);
	}

	else cout << "Veuillez saisir un des caractère du menu !!!" << endl;
	break;
default : "Veuillez saisir un des caractères du menu !";
break;
}





return 0;
}
