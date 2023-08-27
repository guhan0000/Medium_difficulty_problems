#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size1,size2,i,j,max_size,min_size;
   // bool flag;
    
   
    printf("enter size1");
    scanf("%d",&size1);
    int arr1[size1];
    //printf("%d",a);
    printf("enter the elements of array1");
    for(i=0;i<size1;scanf("%d",&arr1[i++]));
    
    //printf("array1\n");
    //for(i=0;i<size1;printf("%d ",arr1[i++]));
    printf("\nenter size2\n");
    scanf("%d",&size2);
     int arr2[size1];
     printf("enter the elements of array2");
    for(i=0;i<size2;scanf("%d",&arr2[i++]));
    //printf("array2\n");
    //for(i=0;i<size2;printf("%d ",arr2[i++]));
    if(size1>size2){
        max_size=size1;
        min_size=size2;
        
        
    }
    else{
        max_size=size2;
        min_size=size1;}
    //printf("%d",max_size);
    int diff=max_size-min_size;
    int sum[max_size];
    
    
        for(j=0;j<min_size;j++)   
        {
            sum[j]=arr1[j]+arr2[j];
        }
        if(size1>size2)
        {
              // printf("hi");
             for(j=min_size;j<max_size;j++)   
            {
                sum[j]=arr1[j];
                //printf("hi");
            }    
        }
        if(size2>size1)
        {
             for(j=min_size;j<max_size;j++)   
            {
                sum[j]=arr2[j];
            }    
        }
       
        for(i=0;i<max_size;printf("%d ",sum[i++]));

    
    

}