/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sel;
    int grt_count=0;
    int less_count=0;
    int div_count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;scanf("%d",&arr[i++]));
    scanf("%d",&sel);
    for(int i=0;i<n;i++)
    {
        if(sel<arr[i])
        {
            grt_count++;
        }
        if(sel>arr[i])
        {
            less_count++;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=sel)
        {
            if(sel%arr[i]==0)
             {
                 div_count++;
             }
            
        }
       
    }
    printf("Greater %d\n",grt_count);
    printf("Lesser %d\n",less_count);
    printf("Exactly divides %d\n",div_count);

    return 0;
}

