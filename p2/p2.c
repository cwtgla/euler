#include <stdio.h>

void main() {
	int total = 0;
	int val1 = 1;
	int val2 = 2;
	int temp = 0;
	
	while(val2 < 4000000) {
		if(val2 % 2 == 0) {
			total = total + val2;
		}
		temp = val2;
		val2 = val1 + val2;
		val1 = temp;
	}
	printf("Total of even values is %d\n", total);
}
