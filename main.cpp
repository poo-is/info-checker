#include "utils.h"

int main(int argc, char *argv[]) {
	ifstream cerinte(argv[1]);
	
	for (int i = 0; i < 3; i++) {
		int task;
		cerinte >> task;
		switch (i) {
			case 0: {
				if (task == 1)
					citire_afisare(argv);
				break;
			}
			case 1: {
				if (task == 1)
					sortare(argv);
				break;
			}
			case 2: {
				if (task == 1)
					find(argv);
				break;
			}
			default: {
				cout << "Error! " << endl;
				break;
			}
		}
	}

	cerinte.close();
	return 0;
}

