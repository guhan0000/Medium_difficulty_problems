import java.util.*;
public class Absolue_diff_arr {

	static int absdiffcount(int arr[],int size,int num,int diff)
	{
		int count=0;
		for(int i=0;i<size;i++)
		{
			if(Math.abs(num-arr[i])<=diff)
			{
				count++;
			}
		}
		return count;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("enter size");
		int size=sc.nextInt();
		int arr[]=new int[size];
		System.out.println("enter elements");
		for(int i=0;i<size;arr[i++]=sc.nextInt());
		System.out.println("enter num");
		int num=sc.nextInt();
		System.out.println("enter diff");
		int diff=sc.nextInt();
		System.out.print(absdiffcount(arr,size,num,diff));
		
		
	//	for(int i=0;i<size;System.out.print(arr[i++]+" "));
		
	}

}
