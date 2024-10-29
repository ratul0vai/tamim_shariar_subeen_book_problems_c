#include <stdio.h>
int main(){
    int count[10][10];
    int col, row, evenCounter = 0, oddCounter = 0, arraySummation= 0;

    for (row = 0; row < 10; row++){
    
     for (col= 0; col < 10; col++)
     {
         count[row][col] = (row + 1) * (col + 1);
        arraySummation += count[row][col];
     }
    
    }
    printf("The summation of the element %d\n", arraySummation);
    int lastElement = count[9][9];
    int normalSummation = (lastElement*(lastElement + 1)) / 2;
    printf("Normal summation of nth( 0 to highest value) is:%d\n",normalSummation);
    for (row = 0; row < 10; row++)
    {
     for (col= 0; col < 10; col++)
     {
         printf("%d X %d = %d\n",(row + 1), (col + 1), count[row][col]);
     }
    }
    
    printf("The even numbers\n");
    for (row = 0; row < 10; row++)
    {
     for (col = 0; col < 10; col++)
     {
        if (count[row][col] % 2 ==0)
        {
            printf("%d X %d = %d\n",(row + 1), (col + 1), count[row][col]);
           evenCounter++;
        }
        }
    }
    printf("Counted even numbers %d\n", evenCounter);
    printf("The odd numbers\n");
    for (row = 0; row < 10; row++)
    {
     for (col = 0; col < 10; col++)
     {
        if (count[row][col] % 2 !=0)
        {
            printf("%d X %d = %d\n",(row + 1), (col + 1), count[row][col]);
            oddCounter++;
        }
     }
    } 
    printf("Counted odd number %d\n", oddCounter);
    return 0;
}