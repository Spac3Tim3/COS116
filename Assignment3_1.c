//Module 3 Section B Q 2

/* Assignment 3, Part B, Question 2 */
#include <stdio.h>
void	liquid(int) /* function header */
{
  int gallons = cups/16;
  int quarts = (cups­(gallons* 16 ))/4;
  int pints = (cups­((gallons*16)+(quarts*4)))/2;
  int cups = cups­((gallons*16)+(quarts*4)+(pints*2));
  printf("Gallons: %d\nQuarts: %d\nPints: %d\nCups %d\n", gallons, quarts, pints, cups);
}
/* function prototype */
int cups; /*global variable */
int main()
{
  printf("This program will convert cups of liquid to gallons, quarts,");
  printf("\npints, and leftover cups remaining in descending order.");
  printf("\n\nType in how many cups of liquid you wish to convert:\n");
  scanf("%d", &cups);
  liquid(cups); /* call function */
  //	printf("Gallons: %d\nQuarts: %d\nPints: %d\nCups %d\n", gallons, quarts, pints, cups);
}
