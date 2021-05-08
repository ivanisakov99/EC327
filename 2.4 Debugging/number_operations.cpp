#include <iostream> 
#include <stdio.h>
#include <string.h>
using namespace std;

int sum(int* nums, int size);
int* odds(int* nums, int size);
double getAverage(int arr[], int size);
void changeValue(int* nums, int new_value, int index);


int main(){
	
	int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int nums_size = sizeof(nums)/sizeof(int); //this gave the number of bytes, so needed to divide by number of bytes that an integer. used step & print and where full

	int *o = odds(nums, nums_size);
	cout << "ODD NUMBERS: " << endl;
	for(int i = 0; i < 10/2; i++){
		cout << *(o + i) << endl;
	}

	
	int s = sum(nums, nums_size);
	cout << "SUM: " << endl;
	cout << s << endl;
	
	
	double average = getAverage(nums, nums_size);
	cout << "AVERAGE: " << endl;
	cout << average << endl;

	
	changeValue(nums, 2343, 6);
	cout << "NEW VALUE INSERTED: " << endl;
	for(int i = 0; i < 10; i++){
		cout << *(nums + i) << endl;
	}
	
}



int sum(int* nums, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(nums + i);
	}
	return sum;
}


double getAverage(int* nums, int size) {
  int sum = 0;       
  double avg;

   for (int i = 0; i < size; i++) {  //there was an equal or less than sign, it should be just less than. used step & print
      sum += *(nums + i);
   }
   avg = sum / double(size);

   return avg;
}


int* odds(int* nums, int size) {
	int *odds = new int[10]; //Need an array that is created on the heap instead of the stack as the pointer is lost. Used ste & print.
	int j = 0;
	for (int i = 0; i < size; i++){
		if ( (*(nums + i)) % 2 != 0 ) { 
			odds[j] = *(nums + i); 
			j++;
		}
	}
	return odds;

}




void changeValue(int* nums, int new_value, int index) {
	nums[index] = new_value; //the pass by reference is not needed here, used break
}


