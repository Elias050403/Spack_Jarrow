#include "Field.h"

int Field::createField()
{
	int field_array[40][30];
	int l = 30; //length
	int h = 0; //height
	for (l = 30; l < 40; l++) {
		for (h = 0; h < 30; h++) {
			field_array[l][h] = 0;
		}
	}

	for (l = 0; l < 30; l++) {
		for (h = 0; h < 30; h++) {
			field_array[l][h] = 1;
		}
	}

	for (h = 0; h < 30; h++) {
		for (l = 0; l < 40; l++) {
			if (l % 40 == 0) {
				printf("\n");
			}
			std::cout << field_array[l][h];
		}
	}
}
