/// \brief Bibliothèques utilisées

#include <iostream>
#include <cstdint>
using namespace std;

/// \brief Fonction d'addition int32
///
///La fonction addition dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int32.
/// \param opA est un entier 32 bits
/// \param opB est un entier 32 bits
/// \return Somme des deux paramètres
/// \sa addition(int64_t opA,int64_t opB)
/// \sa addition(float opA,float opB)
/// \sa addition(double opA,double opB)

int32_t addition(int32_t opA,int32_t opB){
	return opA + opB;
}

/// \brief Fonction d'addition int64
///
///La fonction addition dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int64.
/// \param opA est un entier 64 bits
/// \param opB est un entier 64 bits
/// \return Somme des deux paramètres
/// \sa addition(int32_t opA,int32_t opB)
/// \sa addition(float opA,float opB)
/// \sa addition(double opA,double opB)

int64_t addition(int64_t opA,int64_t opB){
	return opA + opB;
}

/// \brief Fonction d'addition float
///
///La fonction addition dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type float.
/// \param opA est un décimal 32 bits
/// \param opB est un décimal 32 bits
/// \return Somme des deux paramètres
/// \sa addition(int32_t opA,int32_t opB)
/// \sa addition(int64_t opA,int64_t opB)
/// \sa addition(double opA,double opB)

float addition(float opA, float opB){
	return opA + opB;
}

/// \brief Fonction d'addition float
///
///La fonction addition dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type float.
/// \param opA est un décimal 64 bits
/// \param opB est un décimal 64 bits
/// \return Somme des deux paramètres
/// \sa addition(int32_t opA,int32_t opB)
/// \sa addition(int64_t opA,int64_t opB)
/// \sa addition(float opA,float opB)

double addition(double opA, double opB){
	return opA + opB;
}


//---------------------------------------

/// \brief Fonction de soustraction int32
///
///La fonction soustraction dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int32.
/// \param opA est un entier 32 bits
/// \param opB est un entier 32 bits
/// \return Différence des deux paramètres
/// \sa soustraction(int64_t opA,int64_t opB)
/// \sa soustraction(float opA,float opB)
/// \sa soustraction(double opA,double opB)

int32_t soustraction(int32_t opA, int32_t opB){
	return opA - opB;
}

/// \brief Fonction de soustraction int64
///
///La fonction soustraction dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int64.
/// \param opA est un entier 64 bits
/// \param opB est un entier 64 bits
/// \return Différence des deux paramètres
/// \sa soustraction(int32_t opA,int32_t opB)
/// \sa soustraction(float opA,float opB)
/// \sa soustraction(double opA,double opB)

int64_t soustraction(int64_t opA, int64_t opB){
	return opA - opB;
}

/// \brief Fonction de soustraction float
///
///La fonction soustraction dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type float.
/// \param opA est un décimal 32 bits
/// \param opB est un décimal 32 bits
/// \return Différence des deux paramètres
/// \sa soustraction(int32_t opA,int32_t opB)
/// \sa soustraction(int64_t opA,int64_t opB)
/// \sa soustraction(double opA,double opB)

float soustraction(float opA, float opB){
	return opA - opB;
}

/// \brief Fonction de soustraction double
///
///La fonction soustraction dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type double.
/// \param opA est un décimal 64 bits
/// \param opB est un décimal 64 bits
/// \return Différence des deux paramètres
/// \sa soustraction(int32_t opA,int32_t opB)
/// \sa soustraction(int64_t opA,int64_t opB)
/// \sa soustraction(float opA,float opB)

double soustraction(double opA, double opB){
	return opA - opB;
}


//---------------------------------------

/// \brief Fonction de multiplication int32
///
///La fonction multiplication dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int32.
/// \param opA est un entier 32 bits
/// \param opB est un entier 32 bits
/// \return Produit des deux paramètres
/// \sa multiplication(int64_t opA,int64_t opB)
/// \sa multiplication(float opA,float opB)
/// \sa multiplication(double opA,double opB)
int32_t multiplication(int32_t opA, int32_t opB){
	return opA * opB;
}

/// \brief Fonction de multiplication int64
///
///La fonction multiplication dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int32.
/// \param opA est un entier 64 bits
/// \param opB est un entier 64 bits
/// \return Produit des deux paramètres
/// \sa multiplication(int32_t opA,int32_t opB)
/// \sa multiplication(float opA,float opB)
/// \sa multiplication(double opA,double opB)

int64_t multiplication(int64_t opA, int64_t opB){
	return opA * opB;
}

/// \brief Fonction de multiplication float
///
///La fonction multiplication dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type float.
/// \param opA est un décimal 32 bits
/// \param opB est un décimal 32 bits
/// \return Produit des deux paramètres
/// \sa multiplication(int32_t opA,int32_t opB)
/// \sa multiplication(int64_t opA,int64_t opB)
/// \sa multiplication(double opA,double opB)

float multiplication(float opA, float opB){
	return opA * opB;
}

/// \brief Fonction de multiplication double
///
///La fonction multiplication dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type float.
/// \param opA est un décimal 64 bits
/// \param opB est un décimal 64 bits
/// \return Produit des deux paramètres
/// \sa multiplication(int32_t opA,int32_t opB)
/// \sa multiplication(int64_t opA,int64_t opB)
/// \sa multiplication(float opA,float opB)

double multiplication(double opA, double opB){
	return opA * opB;
}


//---------------------------------------

/// \brief Fonction de division int32
///
///La fonction division dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int32.
/// \param opA est un entier 32 bits
/// \param opB est un entier 32 bits
/// \return Quotient des deux paramètres
/// \sa division(int64_t opA,int64_t opB)
/// \sa division(float opA,float opB)
/// \sa division(double opA,double opB)

int32_t division(int32_t opA, int32_t opB){
	return opA / opB;
}

/// \brief Fonction de division int64
///
///La fonction division dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int64.
/// \param opA est un entier 64 bits
/// \param opB est un entier 64 bits
/// \return Quotient des deux paramètres
/// \sa division(int32_t opA,int32_t opB)
/// \sa division(float opA,float opB)
/// \sa division(double opA,double opB)

int64_t division(int64_t opA, int64_t opB){
	return opA / opB;
}

/// \brief Fonction de division float
///
///La fonction division dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type float.
/// \param opA est un décimal 32 bits
/// \param opB est un décimal 32 bits
/// \return Quotient des deux paramètres
/// \sa division(int32_t opA,int32_t opB)
/// \sa division(int64_t opA,int64_t opB)
/// \sa division(double opA,double opB)

float division(float opA, float opB){
	return opA / opB;
}

/// \brief Fonction de division double
///
///La fonction division dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type double.
/// \param opA est un décimal 64 bits
/// \param opB est un décimal 64 bits
/// \return Quotient des deux paramètres
/// \sa division(int32_t opA,int32_t opB)
/// \sa division(int64_t opA,int64_t opB)
/// \sa division(float opA,float opB)

double division(double opA, double opB){
	return opA / opB;
}


//---------------------------------------

//Fonctions modulo
/// \brief Fonction de modulo int32
///
///La fonction modulo dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int32.
/// \param opA est un entier 32 bits
/// \param opB est un entier 32 bits
/// \return Reste du quotient des deux paramètres
/// \sa modulo(int64_t opA,int64_t opB)


int32_t modulo(int32_t opA, int32_t opB){
	return opA % opB;
}

//Fonctions modulo
/// \brief Fonction de modulo int64
///
///La fonction modulo dépend du type des nombres mis en paramètres.
///Celle-ci correspond au type int64.
/// \param opA est un entier 64 bits
/// \param opB est un entier 64 bits
/// \return Reste du quotient des deux paramètres
/// \sa modulo(int32_t opA,int32_t opB)

int64_t modulo(int64_t opA, int64_t opB){
	return opA % opB;
}


/// \brief Cette fonction est une calculatrice permettant à l'utilisateur de choisir le type des nombres qui seront saisis.

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
