#include<stdio.h>
int main()
{
    int size1,size2,target,pair=0;
    printf("enter size1");
    scanf("%d",&size1);
    printf("enter size2");
    scanf("%d",&size2);
    int arr1[size1];
    int arr2[size2];
    printf("enter target sum");
    scanf("%d",&target);
    printf("enter the array1 elements");
    for(int i=0;i<size1;scanf("%d",&arr1[i++]));
    printf("enter the array2 elements");
    for(int j=0;j<size2;scanf("%d",&arr2[j++]));
    
   
   
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr1[i]+arr2[j]==target)
            {
                pair+=1;
            }
        }
    }
    printf("No of Pairs : %d",pair);
  //  for(int i=0;i<4;printf("%d ",arr1[i++]));
    //printf("\n");
    //for(int i=0;i<4;printf("%d ",arr2[i++]));
}
