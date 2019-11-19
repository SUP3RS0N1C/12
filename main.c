#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char src[] = "The worst things to eat before you sleep";//원본(소스)  
	char dst[100];//대상  
	
	strcpy(dst,src);
	
	printf("copied string : %s", dst);

}
