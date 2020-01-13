#include <stdio.h>
int main() {
int (pvMonstre); 
pvMonstre = 100;

while (pvMonstre>0) {
	printf("Vous frappez le Grand Chien-Loup et lui infligez 5 points de degats.\n");
	pvMonstre = pvMonstre-5;
	printf("Le Grand Chien-Loup est touché, il possede desormais %d points de vie.",pvMonstre);
}
}

