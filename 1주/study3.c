#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char malloc[30];

	FILE* fp = fopen("D:\\study\\study\\in.txt", "r");
	fgets(malloc, 30, fp);
	printf("%s", malloc);

	fclose(fp);

	return 0;
}