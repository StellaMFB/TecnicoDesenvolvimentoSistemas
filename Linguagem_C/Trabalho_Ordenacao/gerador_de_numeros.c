#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*void main(){
    int num, lista[1000000], a;
    long i;
	FILE *fptr;
	fptr = fopen("numeros_1bilhao.txt", "w");
	for(a = 0; a < 100; a++){
		for(i = 0; i < 1000000; i++){
			num = rand() % 9999;
			lista[i] = num;
			fprintf(fptr, "%i\n", lista[i]);
		}
	}
	fclose(fptr);
}
*/

void main(){
	int lista[100000];
	long i, num;
	FILE *fptr;
	fptr = fopen("numeros_100mil.txt", "w");
	for(i = 0; i < 100000; i++){
			num = rand() % 100000;
			lista[i] = num;
			fprintf(fptr, "%i\n", lista[i]);
		}
	fclose(fptr);
}