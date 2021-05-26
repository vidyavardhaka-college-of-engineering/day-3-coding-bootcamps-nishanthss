// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Write your code here
    if(number==0){
      printf("%d is zero\n",number);
    }
    else if(number%2==1){
      printf("%d is odd\n",number);
    }
    else if(number%2==0){
      printf("%d is even\n",number);
    }
    return 0;
}
