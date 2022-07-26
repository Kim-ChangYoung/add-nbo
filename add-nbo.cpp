#include <stdio.h>
#include <cstdint>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char *argv[]){

	FILE *x, *y;
	fp1=fopen(argv[1], "rb");
	fp2=fopen(argv[2], "rb");

	uint32_t a, b;

	fread(&a, sizeof(uint32_t), 1, x);
	fread(&b, sizeof(uint32_t), 1, y);

	printf("0x%x + 0x%x = 0x%x", a, b, a + b);

	fclose(x);
	fclose(y);
}	
