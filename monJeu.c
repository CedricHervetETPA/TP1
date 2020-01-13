#include <stdio.h>
int main() {
int (pvMonstre); 
int (pvJoueur);

pvMonstre = 100;
pvJoueur = 100;

while (pvMonstre>0) {
	printf("Vous frappez le Grand Chien-Loup et lui infligez 5 points de degats.\n");
	pvMonstre = pvMonstre-5;
	printf("Le Grand Chien-Loup est atteint, il possede desormais %d points de vie.",pvMonstre);

	printf("Le Grand Chien-Loup contre-attaque, il enlève au joueur %d points de vie.\n",pvJoueur);
	pvJoueur = pvJoueur-5;
	printf("Vous possedez maintenant %d points de vie.\n",pvJoueur);
}
}


