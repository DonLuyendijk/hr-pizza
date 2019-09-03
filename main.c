#include <stdio.h>

int main() {
	printf("hello pizza!\n");
	printf("deze repo bevat OK\n");
	printf("bbbbbbbbbbbbb\n");
	char hand[688];
	FILE *ascii;
	ascii = fopen("ok.ascii", "r");
	if(ascii == NULL) printf("cant open file");
	for(int i = 0; i < 688; i++) {
		hand[i] = fgetc(ascii);
	}
	printf("%s\n", hand);
	return 0;
}
