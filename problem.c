//Find out the smallest number:
#include<stdio.h>

int main() {
  int i, n;
  float num, smallest;

  printf("Enter the total number of elements:");
  scanf("%d", &n);

 printf("Enter number 1:\n");
 scanf("%f", &smallest);  //10 

 for(i=2; i<=n; i++){
    printf("Enter number %d:", i);
    scanf("%f", &num); //5

    if(num< smallest){
        smallest = num;
    }
 }
 printf("The smallest number is:%f", smallest);

  return 0;
}
