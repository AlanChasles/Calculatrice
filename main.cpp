#include <iostream>

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

float modulo(float opA, float opB){
	return opA % opB;
}

double modulo(double opA, double opB){
	return opA % opB;
}

int main() {


char rep;
cout << "Veuillez saisir l'opérateur désiré : \na - Addition\nb - Soustraction\nc - Multiplication\nd - Division\ne - Modulo" << endl;
cin >> rep;

switch(rep){
case 'a' :  
break;
case 'b' :
break;
case 'c' :
break;
case 'd' :
break;
case 'e' :
break;
default : "Vous n'avez pas saisi le bon caractère !!!"
}




return 0;
}
