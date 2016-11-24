#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Cadre
{
	//données Membres
	int longueur;
	int largeur;
	char motif;
	int encrageX;
	int encrageY;

public:
	Cadre();
	Cadre(int lo, int la, char mo, int x, int y); 

	//mutateurs
	int getLong() const;
	int getLarg() const;
	char getMot() const;
	int getX() const;
	int getY() const;

	void setLong(int longueur);
	void setLarg(int larg);
	void setMot(char mot);
	void setX(int x);
	void setY(int y);

	//méthodes: possibilités et modifications
	void afficheCara()const;
	int surfaceCadre()const;
	int perimCadre()const;
	bool isCarre()const;
	void modifCarac();
	void modifLong();
	void modifLarg();
	void modifMot();



	~Cadre();
};

