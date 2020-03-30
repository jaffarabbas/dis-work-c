#include<stdio.h>
#include<conio.h>

void show();



int result;
int n;

 int main() {
     show();
     return 0;
}


int countReflexive(int n) 
    { 
     int result= (1 << (n*n - n));  
     return result;
    } 

void show()
{
     printf("Enter Your set range for relation:  ");
     scanf("%d",&n);
     printf("Relation : %d\n",countReflexive(n)); 
     cartion();
}

void cartion()
{
    int arr[0],arr2[0];
    int i,j,s=1;
    for(i=1;i<=n;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d\n",&arr2[i]);
    }
    // for(j=1;j<=n;j++)
    // {
    //       arr2[j] = j; 
    //       printf("\n%d\n",arr2[i]);
    // }

        printf("cartessian product=");
        printf("{");
         for(i=1;i<=result;i++){
              for(j=1;j<=result;j++){
        printf("(%d,%d)",arr[i],arr2[j]);
        printf(",");
                         }
                }
        printf("}");
}
