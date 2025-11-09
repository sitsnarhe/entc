
#include <stdio.h>
int rows;
void rightAngleTriangleWithNumbers(int);
void diamondShapeWithNumbers(int);
void pyramidWithAsterisks(int);
void pyramidWithAlphabets(int);

int main()
{
    int rows = 4;

    rightAngleTriangleWithNumbers(rows);
    diamondShapeWithNumbers(rows);
    pyramidWithAsterisks(rows);
    pyramidWithAlphabets(rows);

    return 0;
}

void rightAngleTriangleWithNumbers(int n)
{
    printf("Right-angle Triangle with Numbers:\n");
    for (int i = 1; i <= n; i++)
      {
         for (int j = 1; j <= i; j++)
          {
            printf("%d", j);
          }
         printf("\n");
      }
}

void diamondShapeWithNumbers(int n)
{
    printf("\nDiamond Shape with Numbers:\n");

    // Upper half (including middle)
    for (int i = 1; i <= n; i++)
   {
        for (int space = 1; space <= n - i; space++)
       {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
     {
            printf("%d ", i);
      }
        printf("\n");
  }

    // Lower half
    for (int i = n - 1; i >= 1; i--)
    {
        for (int space = 1; space <= n - i; space++)
       {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
     }
        printf("\n");
    }
}

void pyramidWithAsterisks(int n)
{
    printf("\nPyramid with Asterisks:\n");
    for (int i = 1; i <= n; i++)
     {
        // spaces
        for (int j = 1; j <= n - i; j++)
          {
            printf(" ");
        }
        // asterisks
        for (int j = 1; j <= 2 * i - 1; j++)
       {
            printf("*");
        }
        printf("\n");
    }
}

void pyramidWithAlphabets(int n)
{
    printf("\nPyramid with Alphabets:\n");
    for (int i = 1; i <= n; i++)
       {
        // spaces
        for (int j = 1; j <= n - i; j++)
         {
            printf(" ");
        }

        // increasing characters
        char ch = 'A';
        for (int j = 1; j <= i; j++)
      {
            printf("%c", ch++);
        }

        // decreasing characters
        ch -= 2;
        for (int j = 1; j < i; j++)
       {
            printf("%c", ch--);
        }

        printf("\n");
    }
}



