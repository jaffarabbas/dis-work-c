#include<stdio.h>
int main()
{
  int row, col, c, d, matrix[10][10], transpose[10][10];

  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d", &row, &col);
  printf("Enter elements of the matrix\n");

  for (c = 0; c < row; c++)
    for (d = 0; d < col; d++)
      scanf("%d", &matrix[c][d]);

for (c = 0; c < row; c++){
    for (d = 0; d < col; d++){
      printf(" %d ", matrix[c][d]);
    }
    printf("\n");
}
    

  for (c = 0; c < row; c++)
    for (d = 0; d < col; d++)
      transpose[d][c] = matrix[c][d];

  if (row == col)
  {
    for (c = 0; c < row; c++)
    {
      for (d = 0; d < row; d++)
      {
        if (matrix[c][d] != transpose[c][d])
          break;
      }
      if (d != row)
        break;
    }
    if (c == row)
      printf("symmetric.\n");
    else
      printf("Not symmetric.\n");
  }
  else
    printf("Not symmetric.\n");

  return 0;
}