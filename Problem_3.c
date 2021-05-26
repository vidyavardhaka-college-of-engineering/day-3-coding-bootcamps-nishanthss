// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Write your code here
    if(number==0){
      printf("the number is zero");
    }
    else if(number%2==1){
      printf("the number is odd");
    }
    else if(number%2==0){
      printf("the number is even");
    }
   
    return 0;
}
