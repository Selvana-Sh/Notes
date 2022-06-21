#include <stdio.h>
#include <stdlib.h>

//reading a text file, one line at a time

int main(void)
{
	FILE *fp;
	char s[2003];

	fp = fopen("zusammenfassung.txt", "r");
	
	 if ((fp = fopen("zusammenfassung.txt","r")) == NULL)
	 {
		 printf("Error! File does not exist.");
		 exit(1);
	 }
	 while((fgets(s, sizeof(s), fp)) != NULL)
	 {
		printf("%s", s);
	 }
	 
	 fclose(fp);
}
