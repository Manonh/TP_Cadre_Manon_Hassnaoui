/*
DEVOIR C++ 3�me ANNEE 23/11/16

1)	Quel est le r�le d�un constructeur, quand est-il ex�cut� ?
	Le constructeur est une m�thode permettant de cr�er un objet, d�s qu�un objet de la classe est cr�� il est appel�. Il initialise les attributs de l�objet.

2)	Quel est le r�le d�un destructeur, quand est-il ex�cut� ? Indispensable ?
	Le destructeur est une m�thode qui comme son nom l�indique, est l� pour d�truire un objet. 
Elle est ex�cut�e � la fin de la m�thode ou un objet a �t� cr�� et que le programme a d� lui allouer de la m�moire. Le destructeur est indispensable,
comme dit pr�c�demment � la fon des m�thodes o� l�on cr�� des objets, pour lib�rer la m�moire allou�e � ceux-ci.

3)	Comment rep�re-t-on un constructeur d'une classe, peut-il en avoir plusieurs, si oui pourquoi ?
	On rep�re un constructeur assez facilement, tout d�abord parce qu�il doit porter le m�me nom que la classe � laquelle il appartient. 
Ensuite parce que cette m�thode ne renvoi rien, elle ne poss�de aucun type de retour.
Il peut y avoir plusieurs constructeurs, on les appelle les constructeurs par copie, si on veut cr�er un nouvel objet ayant les m�mes caract�ristiques que le premier objet cr��.
C�est une surcharge de constructeur appelant qui initialise notre nouvel objet en copiant des valeurs des attributs du premier ou d�un autre objet.

4)	Qu'est-ce que la sur-d�finition d'une fonction ?
	La sur-d�finition d�une fonction, est le fait qu�il y a plusieurs fonctions du m�me nom, mais celles-ci ont toutes des param�tres diff�rents.

5)	Quelle est la signification de public et de private dans une classe ?
	Public et private sont des modificateurs de classe, le modificateur public signifie que les m�thodes et variables impl�menter dans cette section
seront et pourront �tre utilis�es et appel�es n�importe o� dans le projet.
Private quant � lui signifie, que les m�thodes et variables ne pourront �tre appel�s qu�� partir de la classe � laquelle elles appartiennent.

*/


//programme principal = proc�dure ou fonction
//include Header file
#include <iostream> 
#include <string>
#include "Cadre.h"
using namespace std;

//int main(int argc, char** argv)

int main()
{
	Cadre cadre;
	Cadre cadre1(50, 40, 'l', 15, 16);

	//affichages des caracteristiques par d�faut
	cadre.afficheCara();

	//appel de la m�thode avec toutes les modifications possibles
	cout << "Veuillez modifier les caracteristiques du cadre." << endl;
	cadre.modifCarac();

	cout << "Affichage des parametres modifies, de cadre: " << endl;
	cadre.afficheCara();

	cout << "Parametres rentres � la declaration de cadre1: " << endl;
	cadre1.afficheCara();

	

	system("pause");
	return 0;

}