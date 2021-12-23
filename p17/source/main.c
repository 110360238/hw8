#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	fptr = fopen("C:/Users/tete8/OneDrive/桌面/課程/程式/12_24hw/p17/output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}