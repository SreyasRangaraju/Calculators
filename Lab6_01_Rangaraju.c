#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Function Prototypes
void Inputs(float[], int);
float Mean(float[], int);
float STD(float[], int);
float Range(float[], int);

//Main Method
main()
{
      //Declaring Variables
      int const MAX_DATA = 15;
      int ArrayLength, Selection;
      float Ans;
      char Again = 'y';
      
      //Full Program Loop
      while (Again == 'y')
      {
             printf("Enter number of intputs: ");
             scanf("%d", &ArrayLength);
             float NumArray[ArrayLength];
             
             Selection = 0;
      
          //Error Checking ArrayLength
          while (ArrayLength > MAX_DATA)
          {
                printf("Please enter a number less than %d \n", MAX_DATA);
                printf("Enter number of intputs: ");
                scanf("%d", &ArrayLength);
                float NumArray[ArrayLength];
          }
          
          Inputs(NumArray, ArrayLength);
          
          //Same Data Loop
          while (Selection != 4)
          {
              //Menu
              printf("\n \t Statistical Calculator Menu \n");
              printf("\t (1) Mean \n");
              printf("\t (2) Standard Deviation \n");
              printf("\t (3) Range \n");
              printf("\t (4) Restart/Exit \n");
              
              //Reading Selection
              printf("Please choose an option: ");
              scanf("%d", &Selection);
              
              //Handling Menu Response
              switch (Selection)
              {
                   //Mean
                   case 1:
                        Ans = Mean(NumArray, ArrayLength);
                        printf("Mean = %f", Ans);
                        break;
                    
                   //Standard Deviation     
                   case 2:
                        Ans = STD(NumArray, ArrayLength);
                        printf("Standard Deviation = %f", Ans);
                        break;
                   
                   //Range     
                   case 3: 
                        Ans = Range(NumArray, ArrayLength);
                        printf("Range = %f", Ans);
                        break;
                   
                   //New Input/Exit     
                   case 4:
                        printf("Would you like to enter another set of data? (y/n)");
                        scanf(" %c", &Again);
                        
                        if (Again == 'n')
                        {
                            printf("Goodbye");
                            getch();
                        }

                        break;
                   //Error Checking     
                   default:
                            printf("Please select an interger option shown in the menu");
                            break;
              }
          }
      }
}

//Array Input Function
void Inputs(float NumArray[], int ArrayLength)
{     
      int i;
      for (i = 0; i < ArrayLength; i++)
      {
            printf("\nPlease enter input %d: ", i+1);
            scanf("%f", &NumArray[i]);
      }
}

//Mean Function
float Mean (float NumArray[], int ArrayLength)
{
      //Declaring Variables
      int Sum = 0, i;
      
      for (i = 0; i < ArrayLength; i++)
      {
            Sum+=NumArray[i];
      }
      
      return (float) Sum/ArrayLength;
}

//Standard Deviation Function
float STD (float NumArray[], int ArrayLength)
{
      //Declaring Variables
      float Variance, Avg = Mean(NumArray, ArrayLength);
      float VarArray[ArrayLength];
      int i;
      
      for (i = 0; i < ArrayLength; i++)
      {
            VarArray[i] = (NumArray[i] - Avg)*(NumArray[i] - Avg);
      }
      
      Variance = Mean(VarArray, ArrayLength);
      return sqrt(Variance);
      
}

//Range
float Range (float NumArray[], int ArrayLength)
{
      //Declaring Variables
      int Max = NumArray[0], Min = NumArray[0], i;
      
      for (i = 0; i < ArrayLength; i++)
      {
            if (Max < NumArray[i])
            {
                    Max = NumArray[i];
            }
            
            if (Min > NumArray[i])
            {
                    Min = NumArray[i];
            }
      }
      
      return (Max - Min);
}
