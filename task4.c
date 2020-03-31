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

       int a[50],b[50],c[50],i,s1,s2,j,k;
s1 = n;
s2=  n;
    int temp[0];
           printf("Enter elements of set 1\n");
           for(i=0;i<s1;i++){
 scanf("%d",&a[i]);
 }
           printf("Enter elements of set 2\n");
 for(i=0;i<s2;i++)
 {
 scanf("%d",&b[i]);
 }
           printf("cartessian product=");
 printf("{");
 for(i=0;i<s1;i++)
 {
 for(j=0;j<s2;j++)
 {
 printf("(%d,%d)",a[i],b[j]);
 printf(",");
 }
 }
 printf("}");
}
