#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n;
	FILE* fpIn;
	FILE* fpOut;
	int * array;
	int x = 0;
	int min=10000, secondMin=10000;
	int minIdx=0;
	printf("�ż�����к�, 2020114094, ���� \n");
	
	fopen_s(&fpIn, "in.txt", "r");
	fopen_s(&fpOut, "out.txt", "w");

	if (fpIn==NULL) {
		printf("���� ���� ����");
	}
	if (fpOut == NULL) {
		printf("���� ���� ����");
	}


	fscanf_s(fpIn, "%d", &n);
	printf("n: %d\n", n);

	array = (int*) malloc(sizeof(int) * n);
	printf("����\n");
	for (int i = 0; i < n; i++) {
		fscanf_s(fpIn, "%d", &array[i]);
		if (array[i] < min) {
			min = array[i];
			minIdx = i;
		}
		//sort
		//ù���� �ι��� ���
	}
	for (int i = 0; i < n; i++) {
	;
		if (i == minIdx) continue;
		if (array[i] < secondMin) {
			secondMin = array[i];
		}
		//sort
		//ù���� �ι��� ���
	}

	printf("���� ���� ��: %d\n", min);
	printf("�ι����� ���� ��: %d\n", secondMin);

	while (1) {
		scanf_s("%d", &x);
		if (x > 0) {
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if ((array[i] % x) == 0) {
			printf("%d�� ���: %d\n", x, array[i]);
			fprintf(fpOut, "%d�� ���: %d\n", x, array[i]);
		}
	}
	fclose(fpIn);
	fclose(fpOut);
	
	}