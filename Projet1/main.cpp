/*
DEVOIR C++ 3ème ANNEE 23/11/16

1)	Quel est le rôle d’un constructeur, quand est-il exécuté ?
	Le constructeur est une méthode permettant de créer un objet, dès qu’un objet de la classe est créé il est appelé. Il initialise les attributs de l’objet.

2)	Quel est le rôle d’un destructeur, quand est-il exécuté ? Indispensable ?
	Le destructeur est une méthode qui comme son nom l’indique, est là pour détruire un objet. 
Elle est exécutée à la fin de la méthode ou un objet a été créé et que le programme a dû lui allouer de la mémoire. Le destructeur est indispensable,
comme dit précédemment à la fon des méthodes où l’on créé des objets, pour libérer la mémoire allouée à ceux-ci.

3)	Comment repère-t-on un constructeur d'une classe, peut-il en avoir plusieurs, si oui pourquoi ?
	On repère un constructeur assez facilement, tout d’abord parce qu’il doit porter le même nom que la classe à laquelle il appartient. 
Ensuite parce que cette méthode ne renvoi rien, elle ne possède aucun type de retour.
Il peut y avoir plusieurs constructeurs, on les appelle les constructeurs par copie, si on veut créer un nouvel objet ayant les mêmes caractéristiques que le premier objet créé.
C’est une surcharge de constructeur appelant qui initialise notre nouvel objet en copiant des valeurs des attributs du premier ou d’un autre objet.

4)	Qu'est-ce que la sur-définition d'une fonction ?
	La sur-définition d’une fonction, est le fait qu’il y a plusieurs fonctions du même nom, mais celles-ci ont toutes des paramètres différents.

5)	Quelle est la signification de public et de private dans une classe ?
	Public et private sont des modificateurs de classe, le modificateur public signifie que les méthodes et variables implémenter dans cette section
seront et pourront être utilisées et appelées n’importe où dans le projet.
Private quant à lui signifie, que les méthodes et variables ne pourront être appelés qu’à partir de la classe à laquelle elles appartiennent.

*/


//programme principal = procédure ou fonction
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

	//affichages des caracteristiques par défaut
	cadre.afficheCara();

	//appel de la méthode avec toutes les modifications possibles
	cout << "Veuillez modifier les caracteristiques du cadre." << endl;
	cadre.modifCarac();

	cout << "Affichage des parametres modifies, de cadre: " << endl;
	cadre.afficheCara();

	cout << "Parametres rentres à la declaration de cadre1: " << endl;
	cadre1.afficheCara();

	

	system("pause");
	return 0;

}