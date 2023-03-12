#include "logic.h" 

int create_chance() {
	int chance = rand() % 4;
	return chance;
}


void create_numbers(int* array, int size) {
	int min = 0;
	int max = 9;
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}

}


string create_examples(int* array, int chance) {
	string msg = "";
	char fsing = chance == 0 ? '+' : chance == 1 ? '-' : chance == 2 ? '-' : '+';
	char ssing = chance == 0 ? '+' : chance == 1 ? '-' : chance == 2 ? '+' : '-';

	msg += to_string(array[0]) + " " + fsing + " " + to_string(array[1]) + " " + ssing + " " + to_string(array[2]) + " = ";

	return msg;
}

int create_result_example(int* array, int chance) {
	int o_result = array[0] + array[1] + array[2];
	int t_result = array[0] - array[1] - array[2];
	int tr_result = array[0] - array[1] + array[2];
	int f_result = array[0] + array[1] - array[2];

	int result = chance == 0 ? o_result : chance == 1 ? t_result : chance == 2 ? tr_result : f_result;
	return result;
}

int logic_examples(int* array) {
	int chance = create_chance();


	int result = create_result_example(array, chance);
	create_examples(array, chance);


	return 0;
}