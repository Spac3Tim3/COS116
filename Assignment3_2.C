#include <stdio.h>
void liquid(int *a);
int cups = 0 ;

main()
 {
	printf("This program will calculate the total cups in /n");
	printf("gallons,pints,quarts,and cups. ");
	printf("Please enter the total number of cups:");
	scanf("%d",&cups);
	liquid(&cups);
}
void liquid() {
	int gallons,quarts,pints,cups;
	gallons = cups/16;quarts = cups*­(gallons* 16) /4;pints = cups*­((gallons*16)+(quarts*4))/2;cups = cups*­((gallons*16)+(quarts*4)+(pints*2));
	printf("Gallons: %d\nQuarts: %d\nPints: %d\nCups %d\n", gallons, quarts, pints, cups);
}
