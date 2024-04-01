#include "countdown.h"
#include <stdio.h>
#include <unistd.h>
void countdown(int time){
	if (time > 0){
		printf("%d\n",time);
		sleep(1);
		countdown(--time);
	}
	else {
		printf("Time out\n");	
		return;
	}
}

