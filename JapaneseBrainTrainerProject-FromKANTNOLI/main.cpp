#include "logic.h"

int main() {
	srand(time(NULL));
	int size = 3; //count numbers
	int* array = new int[size];
	int count = 0;
	for (;;)
	{
		create_numbers(array, size);
		int chance = create_chance();
		int input;

		int result = create_result_example(array, chance);
		do
		{
			cout << "Examples ready: " << count << endl << create_examples(array, chance);
			cin >> input;
			system("cls");
		} while (input != result);
		count++;
	}


	return 0;
}