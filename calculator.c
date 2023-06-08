#include<stdio.h>
int main(){
      char operation;
      int first, second;
      int sum;
      printf("1. (+)\n2. (-)\n3. (/)\n4. (*)\nEnter the operation you want: ");
      scanf("%c", &operation);
      printf("Enter the first number: ");
      scanf("%d", &first);
      printf("Enter the second number:");
      scanf("%d", &second);
      
      if (operation == '+'){
            sum = first + second;
            printf("%d", sum);
      }else if(operation == '-'){
            sum = first - second;
            printf("%d", sum);
      }else if(operation == '/'){
            sum = first / second;
            printf("%d", sum);
      }else if (operation == '*'){
            sum = first * second;
            printf("%d", sum);
      }else{
            printf("Invalid operator");
      }
      return 0;
}
