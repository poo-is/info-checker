#include "utils.h"

// TODO: Cerinta 1
// Citirea si afisarea unui vector din fisier
void citire_afisare(char *argv[]) {
	ifstream date(argv[2]);
	ofstream rezultate(argv[3]);
	int dim_vector;
	date >> dim_vector;

	for (int i = 0; i < dim_vector; i++) {
		int val;
		date >> val;
		rezultate << val << " ";
	}

	date.close();
	rezultate.close();
}

// TODO: Cerinta 2
// Sortare vector din fisier (in ordine crescatoare)
void sortare (char *argv[]) {
	ifstream date(argv[2]);
	ofstream rezultate(argv[3]);

	int dim_vector;
	date >> dim_vector;
	int newVect[dim_vector];

	for (int i = 0; i < dim_vector; i++) {
		date >> newVect[i];	
	}

	sort(newVect, newVect+dim_vector);
	for (int i = 0; i < dim_vector; i++) {
		rezultate << newVect[i] << " ";
	}

	date.close();
	rezultate.close();
}

// TODO: Cerinta 3
/* Avem un vector cu N elemente. Acestea sunt de la 1 la n-1. Vectorul are un singur element care se repeta. Trebuie sa gasiti acel element. */
// Bonus: cazul special
void find(char *argv[]) {
	ifstream date(argv[2]);
	ofstream rezultate(argv[3]);

	///////////////
	// Rezolvare \\
	// Rezolvare \\
	// Rezolvare \\
	///////////////

	date.close();
	rezultate.close();
}
