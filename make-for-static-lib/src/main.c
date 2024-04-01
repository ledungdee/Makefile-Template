#include <stdio.h>
#include <stdlib.h>
#include "countdown.h"
#include "mymath.h"




int main(int argc, char * argv[]){
	int time;
	time = atoi(argv[1]);
	printf("Coutdown for %ds:\n",time);	
	countdown(time);
	printf("add(6,4) = %d\n",add(6,4));
	return 0;
	
	
}

