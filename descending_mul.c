#include<stdio.h>
int main()
{
    int size,val;
    printf("enter then size of an array");
    scanf("%d",&size);
    int arr1[size];
     printf("enter then value to be multiplied");
    scanf("%d",&val);
    printf("enter the elements of the array");
    for(int i=0;i<size;scanf("%d",&arr1[i++]));
    int res[size];
    for(int i=0;i<size;i++)
    {
        res[i]=val*arr1[i];
    }
  for(int i=0;i<size;i++)
  {
     for(int j=i+1;j<size;j++)
     {
        if(res[i]<res[j])
       {
           int temp=res[i];
           res[i]=res[j];
           res[j]=temp;
       }
     }
  }
     //for(int i=0;i<size;printf("%d ",res[i++]));
       for(int i=0;i<size;printf("%d ",res[i++]));
    
}