#include <stdio.h>
#include <ctype.h>
#include <conio.h>

//Function prototypes
void Addition(float, float);
void Subtraction(float, float);
void Multiplication(float, float);
void Division(float, float);
void InnerSum(int);
void Fibonacci(int);
float TemperatureConversion(void);
float MassConversion(void);

//Main method
main()
{
      //Declaring variables
      int selection, num;
      float num1, num2;
      
      //Menu Loop
      while (selection != 9)
      {
          //Displaying Menu
          printf("\nCalculator menu\n");    
          printf("\n(1) Addition");
          printf("\n(2) Subtraction");
          printf("\n(3) Multiplication");
          printf("\n(4) Division");
          printf("\n(5) Inner Sum");
          printf("\n(6) Fibonacci");
          printf("\n(7) Temperature Conversion");
          printf("\n(8) Mass Conversion");
          printf("\n(9) Exit");
          
          //Reading Menu Selection
          printf("\nPlease choose an operation: \n");
          scanf("%d", &selection);
          
          //Performing Operations
          switch (selection)
          {          
                 //Addition
                 case 1:
                      //Handling first number
                      printf("Enter first number: ");
                      scanf("%f", &num1);
                      
                      //Handling second number
                      printf("Enter second number: ");
                      scanf("%f", &num2);
                      
                      //Handling Answer
                      Addition(num1, num2);
                      break;
                 
                 //Subtraction     
                 case 2:
                      //Handling first number
                      printf("Enter first number: ");
                      scanf("%f", &num1);
                      
                      //Handling second number
                      printf("Enter second number: ");
                      scanf("%f", &num2);
                      
                      //Handling Answer
                      Subtraction(num1, num2);
                      break;
                 
                 //Multiplication     
                 case 3:
                      //Handling first number
                      printf("Enter first number: ");
                      scanf("%f", &num1);
                      
                      //Handling second number
                      printf("Enter second number: ");
                      scanf("%f", &num2);
                      
                      //Handling Answer
                      Multiplication(num1, num2);
                      break;
                      
                 //Division     
                 case 4:
                      //Handling first number
                      printf("Enter first number: ");
                      scanf("%f", &num1);
                      
                      //Handling second number
                      printf("Enter second number: ");
                      scanf("%f", &num2);
                      while (num2 == 0)
                      {
                               printf("Division by zero not allowed. Please enter another number: ");
                               scanf("%f", &num2);
                      }

                      //Handling answer
                      Division(num1, num2);                     
                      break;
                 
                 //Inner Sum
                 case 5:
                      printf("Enter number: ");
                      scanf("%d", &num);    
                      InnerSum(num);
                      break;
                      
                 //Fibonacci
                 case 6:
                      printf("Enter number: ");
                      scanf("%d", &num);
                      
                      while (num <= 1)
                      {
                            printf("Enter integer greater than one: ");
                            scanf("%d", &num);
                      }
                      
                      Fibonacci(num);
                      
                      break;
                      
                 //Temperature Conversion
                 case 7:
                      printf("The converted temperature is %f degrees\n", TemperatureConversion());
                      break;
                      
                 //Mass Conversion
                 case 8:
                      printf("The converted mass is %f\n units", MassConversion());
                      break;
                 
                 //User exits
                 case 9:
                      printf("Goodbye!");
                      scanf("%d", &num);
                      printf("%d", num); 
                      break;
                 
                 //User inputs innapropriate menu value
                 default:
                         printf("Please choose valid menu option\n");
                         break;
          }
      }
      
      //Returning as necessary
      return 0;
}

//Addition Function
void Addition(float num1, float num2)
{
     float sum;
     sum = num1 + num2;
     printf("%f + %f = %f\n", num1, num2, sum);
}

//Subtraction Function
void Subtraction(float num1, float num2)
{
     float difference;
     difference = num1 - num2;
     printf("%f - %f = %f\n", num1, num2, difference);
}

//Multiplication Function
void Multiplication(float num1, float num2)
{
     float product;
     product = num1 * num2;
     printf("%f * %f = %f\n", num1, num2, product);
}

//Division Function
void Division(float num1, float num2)
{
     float quotient;
     quotient = num1 / num2;
     printf("%f / %f = %f\n", num1, num2, quotient);
}

//Inner Sum Function
void InnerSum(int num)
{
     int inSum = 0, tempnum, temp;
     for(tempnum = num; tempnum > 0;tempnum = tempnum/10)
     {
                 temp = tempnum%10;
                 inSum += temp;
     }
     
     printf("%d\n", inSum);
}

//Fibonacci Function
void Fibonacci(int num)
{
     int fib1 = 0, fib2 = 1, fib3 = 0;
     printf("The first %d fibonacci numbers are 0, 1", num); 
     for (num -= 2; num > 0; num--)
     {
         fib3 = fib1 + fib2;
         printf(", %d", fib3);
         fib1 = fib2;
         fib2 = fib3;
     }
}

//Temperature Conversion Function
float TemperatureConversion(void)
{
      int selection;
      float Celsius, Farenheit;
      
      printf("Which way do you want to convert?\n");
      printf("(1) Celsius to Farenheit\n");
      printf("(2) Farenheit to Celsius\n");
      scanf("%d", &selection);
      
      switch(selection)
      {                
                       //Converting Celsius to Farenheit
                       case 1:
                            printf("Enter temperature Celsius ");
                            scanf("%f", &Celsius);
                            Farenheit = 9/5*Celsius + 32;
                            return Farenheit;
                       
                       //Converting Farenheit to Celsius     
                       case 2:
                            printf("Enter temperature Farenheit ");
                            scanf("%f", &Farenheit);
                            Celsius = 5/9*(Farenheit - 32);
                            return Celsius;
                            
                       default:
                               printf("Please choose valid menu option\n");
                               break;
                               
      }
}

//Mass Conversion Function
float MassConversion(void)
{
      int selection;
      float Lb, Kg;
      
      printf("Which way do you want to convert?\n");
      printf("(1) Pounds to Kilograms\n");
      printf("(2) Kilograms to Pounds\n");
      scanf("%d", &selection);
      
      switch(selection)
      {                
                       //Converting Pounds to Kilograms
                       case 1:
                            printf("Enter mass in pounds ");
                            scanf("%f", &Lb);
                            Kg = Lb/2.20462;
                            return Kg;
                       
                       //Converting Kilograms to Pounds
                       case 2:
                            printf("Enter mass in kilograms ");
                            scanf("%f", &Kg);
                            Lb = Kg*2.20462;
                            return Lb;
                            
                        default:
                                printf("Please choose valid menu option\n");
                                break;
      }
}
