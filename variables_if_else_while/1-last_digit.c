#include<stdio.h>
#include<time.h>
/* more headers goas there 
 *
 * betty style doc for function main there */
int main(void){
	int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0) {
	printf("%d is positive ")
} else if (n = 0) { 
	printf("%d is zero ")
} else {
	printf("%d is negative ")
return (0);
}
