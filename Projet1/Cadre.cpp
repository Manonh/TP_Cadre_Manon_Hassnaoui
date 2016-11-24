#include "Cadre.h"


//constructeurCadre 1, tout à null
Cadre::Cadre()
{
	this->largeur = 5;
	this->longueur = (largeur * 2);
	this->motif = '*';
	this->encrageX = 10;
	this->encrageY = 5;

}



//constructeurCadre 2, valeurs par défaut 
Cadre::Cadre(int lo, int la, char mo, int x, int y)
{
	this->longueur = lo;
	this->largeur = la;
	this->motif = mo;
	this->encrageX = x;
	this->encrageY = y;
}



//BUT: retourner la longueur du cadre = à celle entrée
//ENTREE: entier par un constructeur ou par un utilisateur
//SORTIE: retourne la longueur du cadre
int Cadre::getLong() const
{
	return this->longueur;
}



//BUT: retourne la largeur du cadre = à celle entrée
//ENTREE:entier par un constructeur ou par l'utilisateur
//SORTIE: retourne la largeur du cadre
int Cadre::getLarg() const
{
	return this->largeur;
}



//BUT: retourne le motif du cadre = à celui entrée
//ENTREE: caractère par un constructeur ou par l'utilisateur
//SORTIE:retourne le motif du cadre
char Cadre::getMot() const
{
	return this->motif;
}



//BUT: retourne la valeur de X initialisé par le constructeur
//ENTREE: entier par un constructeur
//SORTIE: retourne la valeur de X
int Cadre::getX() const
{
	return this->encrageX;
}



//BUT: retourne la valeur de Y initialisé par le constructeur
//ENTREE: entier par un constructeur
//SORTIE: retourne la valeur de Y
int Cadre::getY() const
{
	return this->encrageY;
}



//BUT: initialise la longueur du cadre quand il est créé
//ENTREE: entier par le constructeur ou par l'utilisateur
//SORTIE: Rien
void Cadre::setLong(int longueur)
{
	this->longueur = longueur;
}



//BUT: initialise la largeur du cadre quand il est créé
//ENTREE: entier par le constructeur ou par l'utilisateur
//SORTIE: Rien
void Cadre::setLarg(int larg)
{
	this->largeur = larg;
}



//BUT: initialise le motif du cadre quand il est créé
//ENTREE: Caractère par le constructeur ou par l'utilisateur
//SORTIE: Rien
void Cadre::setMot(char mot)
{
	this->motif = mot;
}



//BUT: initialise la valeur de X quand il est créé
//ENTREE: entier par le constructeur
//SORTIE: Rien
void Cadre::setX(int x)
{
	this->encrageX = x;
}



//BUT: initialise la valeur de Y quand il est créé
//ENTREE: entier par le constructeur
//SORTIE: Rien
void Cadre::setY(int y)
{
	this->encrageY = y;
}



//BUT: afficher les caractéristiques du cadre
//ENTREE: entiers et caractère par le constructeur ou par l'utilisateur
//SORTIE:caractérisiques du cadre
void Cadre::afficheCara() const
{
	cout << "La longueur du cadre est: " << this->getLong()<< endl;
	cout << "La largeur du cadre est: " << this->getLarg() << endl; 
	cout << "Le motif est: " << this->getMot() << endl;
	cout << "Le perimetre du cadre est: " << this->perimCadre() << endl;
	cout << "La suraface du cadre est: " << this->surfaceCadre() << endl;
	cout << "La valeur de x est: " << this->getX() << endl;
	cout << "La valeur de y est: " << this->getY() << endl;
	if ((this->isCarre()) == true)
	{
		cout << "le cadre est un carre." << endl;
	}
	else
	{
		cout << "le cadre est un rectangle." << endl;
	}
}



//BUT:calcul de la surface du cadre
//ENTREE:longueur et largeur du cadre
//SORTIE:entier = à la surface du cadre
int Cadre::surfaceCadre() const
{
	int surfaceC;

	surfaceC = (longueur*largeur);
	return surfaceC;
}



//BUT:calcul du périmètre du cadre
//ENTREE:longueur et largeur du cadre
//SORTIE:entier = au périmètre du cadre
int Cadre::perimCadre() const
{
	int perimC;
	
	perimC = ((longueur + largeur) * 2);
	return perimC;
}



//BUT:définir si le cadre est un carré ou non
//ENTREE:longueur et largeur
//SORTIE:booléen, vrai ou faux
bool Cadre::isCarre() const
{
	if (longueur == largeur)
	{
	return true;
	}

}



void Cadre::modifCarac()
{
	modifMot();
	modifLarg();
	modifLong();
}

//BUT:modifier la longueur du cadre
//ENTREE:entier par l'utilisateur
//SORTIE:longueur du cadre modifier
void Cadre::modifLong()
{
	int nvLong;
	cout << "Entrez la nouvelle longueur: " << endl;
	cin >> nvLong; 
	
	this->longueur = nvLong;
}



//BUT:modifier la largeur du cadre
//ENTREE:entier par l'utilisateur
//SORTIE:largeur du cadre modifier
void Cadre::modifLarg()
{
	int nvLarg;
	cout << "Entrez la nouvelle largeur: " << endl;
	cin >> nvLarg;

	this->largeur = nvLarg;
}



//BUT:modifier le motif du cadre
//ENTREE:caractère par l'utilisateur
//SORTIE:motif du cadre modifier
void Cadre::modifMot()
{
	char nvMot;
	
	cout << "Entrez votre nouveau motif: ";
	cin >> nvMot;

	this->motif=nvMot;
}



Cadre::~Cadre()
{
}
