#include "logic.h"

int main() {
	srand(time(NULL));
	int size = 3; //count numbers
	int* array = new int[size];

	settings( array,  size);

	return 0;
}