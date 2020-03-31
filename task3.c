#include <stdio.h>

int main(int argc, char const *argv[])
{
      int row, col, c, d, matrix[10][10];

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
    for (c = 0; c < row; c++){
      for (d = 0; d < col; d++){
       if(matrix[0][1] == matrix[1][2]){
		   if(matrix[0][2])
		   {
			   printf("Transitive !!!");
			   break;
		   }
		 break;
		    printf("Not Transitive !!!");
		 break;
	   }
	    printf("Not Transitive !!!");
	   break;
	  }
  }
        
      
    return 0;
}
