#include <stdio.h>

//writing a text file

int main(void)
{
	FILE *fp;

	char x = '0';
	fp = fopen("zusammenfassung.txt", "w");

	fputs("lol", fp);
	fputc('\n', fp);
	fputs("So tell me: What is it all about?\n", fp);
	fprintf(fp,"Is it all about exit(%c)?\n", x);
	fputs("In case you've forgotten, there is no exit to this loop you call life.", fp);

	fclose(fp);
}
