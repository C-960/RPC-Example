#include <stdio.h>
#include <stdlib.h>

/* Simple function to read from a text file.
 * TODO: read this file remotely using RPC */

void get_text(void) {
	FILE *fp;
	int c;
	fp = fopen("txt_to_read.txt", "r");
	while((c = getc(fp)) != EOF)
		putchar(c);
	
	fclose(fp);
}

int main(void) {
	get_text();
	return 0;
}
