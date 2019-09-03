#include <stdio.h>
#define filesize 688

int main() {
	printf("hello pizza!\n");
	printf("deze repo bevat OK\n");
	printf("bbbbbbbbbbbbb\n");
	char hand[filesize];
	FILE *ascii;
	ascii = fopen("ok.ascii", "r");
	if(ascii == NULL) printf("cant open file");
	for(int i = 0; i < filesize; i++) {
		hand[i] = fgetc(ascii);
	}
	printf("%s\n", hand);
	return 0;
}
