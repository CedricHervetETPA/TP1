#include <stdio.h>


int main(){
	int pvMonstre; 
	int pvJoueur;
	int choixJoueur;
	int degatsJoueur;
	int degatsMonstre;

	pvMonstre = 500;
	pvJoueur = 1000;
	degatsJoueur = 100;
	degatsMonstre = 20;

	while (pvMonstre>0) {
		printf("(1) attaquer (2) defendre\n");
		scanf("%d",&choixJoueur);
		if (choixJoueur==1) {
			printf("Vous frappez le Grand Chien-Loup et lui infligez %d points de degats.\n",degatsJoueur);
			pvMonstre = pvMonstre-degatsJoueur;
			printf("Le Grand Chien-Loup possede desormais %d points de vie.\n",pvMonstre);
			printf("Le Grand Chien-Loup contre-attaque, il enleve au joueur %d points de vie.\n",degatsMonstre);
			pvJoueur = pvJoueur-degatsMonstre;
			printf("Vous possedez maintenant %d points de vie.\n",pvJoueur);
		}
		else if (choixJoueur==2) {
			printf("Le Grand Chien-Loup attaque mais vous vous defendez, il vous enleve quand meme 5 points de vie.\n");
			pvJoueur = pvJoueur-degatsMonstre/4;
			printf("Vous possedez maintenant %d points de vie.\n",pvJoueur);
		}
		if (pvJoueur<=0) {
	printf("Vous tombez sous les coups de crocs du Grand Chien-Loup.\n");
	break;
	}
	}
	if (pvMonstre<=0) {
		printf("Le Grand Chien-Loup a succombe a ses blessures.");
	}
 
}
