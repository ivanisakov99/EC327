#include <stdio.h>
#include <stdlib.h>

//What are we doing here? Please explain as a comment. 
int* ec327_lab6() {

	int *stay_safe = new int[20]; //We are not passing the array back to the function, so we have a memory leak here. Now it is fixed. We could have used valgrind. 
	return stay_safe;
}


int main(){
  	int counter;
  	int *ptr;

	int *o = ec327_lab6();

  	for(counter = 0; counter < 13; counter++){
  		ptr = (int*)malloc(sizeof(int) * 47);//This allocated 188 bytes of memory 13 different times, the ptr pointer was overwritten and there was a memory leak. It now is being freed after the memory block is allocated.
		free(ptr);
	}
	
  	return 0;
}
