#include <stdio.h>
#include <stdlib.h>

int main() {
	// table: указатель на массив указателей (указатели на строки).
	// table[i]: указатель на строку (массив int).
	// table[i][j]: элемент строки (элемент типа int).
	
	int **table; // указатель для блока памяти для массива указателей
	int *rows; // указатель для блока памяти для хранения информации по строкам

	int rowscount;
	int d;
	
	printf("Rows count=");
	scanf("%d",&rowscount);

	// выделяем память  для двумеррного массива
	table = calloc(rowscount,sizeof(int*));
	rows = malloc(sizeof(int)*rowscount);
	
	for(int i = 0; i < rowscount; i++) {
		printf("\nColumns count for row %d\n",i);
		scanf("%d",&rows[i]);
		// Выделение памяти для каждого указателя (строки):
		table[i] = calloc(rows[i],sizeof(int));

		for(int j = 0; j < rows[i]; j++) {
			printf("table[%d][%d]=",i,j);
			scanf("%d",&d);
			table[i][j] = d;
		}
	}

	for(int i = 0; i < rowscount; i++) {
		printf("\n");

		for(int j = 0; j < rows[i]; j++) {
			printf("%d \t", table[i][j]);
		}
		free(table[i]);
	}
	free(table);
	free(rows);
	return 0;
}

