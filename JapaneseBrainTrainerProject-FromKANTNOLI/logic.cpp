#include "logic.h" 
void create_numbers(int* array, int size) {
	int min = -9;
	int max = 9;
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}

}

string output_examples(int fnum, int snum, int tnum, char fsim, char ssim) {
	string msg = "";

	msg += to_string(snum) + " " + fsim + " " + to_string(fnum) + " " + ssim + " " + to_string(tnum) + " = ";

	return msg;
}



int create_examples(int* array, int size, int fnum, int snum, int tnum) {
	int result = 0;
	int chance = rand() % 3;
	char fsim = '+';
	char ssim = '+';
	if (chance == 0) {
		fsim = '-';
		ssim = '+';
		result = fnum - snum;
		cout << result * -1 << " t " << endl;
		result = result + tnum;
		cout << result << " t " << endl;

	}
	else if (chance == 1) {
		fsim = '+';
		ssim = '-';
		result = fnum + snum;
		cout << result * -1 << " t " << endl;
		result = result - tnum;
		cout << result << " t " << endl;
	}
	else {
		result = fnum + snum + tnum;
	}

	cout << output_examples(fnum, snum, tnum, fsim, ssim) << result << endl;

	return result;
}

void settings(int* array, int size) {

	cout << "Every 10 numbers, there will be an opportunity to complete the game - enter to start" << endl;
	getchar();
	system("cls");
	for (;;)
	{
		for (int i = 0; i < 10; i++)
		{
			int input = 0;
			create_numbers(array, size);
			int fnum = array[0];
			int snum = array[1];
			int tnum = array[2];
			int result = create_examples(array, size, fnum, snum, tnum);
			do
			{
				cin >> input;
			} while (input != result);
		}
		int g;
		cout << "Stop? Yes - 1, No - 0";
		cin >> g;
		if (g == 1)
		{
			return;
		}
		system("cls");
	}


}