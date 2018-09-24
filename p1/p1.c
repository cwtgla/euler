#include <stdio.h>

void main() {
	int limit = 999;
	int sum = 0;

	while(limit != 0) {
		if(limit % 5 == 0 || limit % 3 == 0) {
			sum+=limit;
		}
		limit--;
	}
	printf("sum is : %d\n", sum);
}
