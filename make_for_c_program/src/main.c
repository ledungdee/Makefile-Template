#include <stdio.h>
#include <stdlib.h>
#include "countdown.h"

int main(int argc, char * argv[]){
	int time;
	time = atoi(argv[1]);
	printf("Coutdown for %ds:\n",time);	
	countdown(time);
	return 0;
}

