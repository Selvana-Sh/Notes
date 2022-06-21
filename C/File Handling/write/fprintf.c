#include <stdio.h>

//writing a text file:

int main(void)
{
	FILE *fp;
	char n = '0';

	fp = fopen("zusammenfassung.txt", "w");
	
	fprintf(fp, "lol\nSo tell me: What is it all about?\nIs it all about exit(%c)?\nIn case you've forgotten, there is no exit to this loop you call life.\n", n);
	fclose(fp);
}
