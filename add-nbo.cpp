#include <stdio.h>
#include <cstdint>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char *argv[]){

	FILE *x, *y;
	x=fopen(argv[1], "rb");
	y=fopen(argv[2], "rb");

	uint32_t a, b;

	fread(&a, sizeof(uint32_t), 1, x);
	fread(&b, sizeof(uint32_t), 1, y);

	printf("0x%x + 0x%x = 0x%x", a, b, a + b);

	fclose(x);
	fclose(y);
}	
