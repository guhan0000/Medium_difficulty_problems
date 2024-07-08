import java.util.*;
public class Rat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int r=sc.nextInt();
		int unit=sc.nextInt();
		int n=sc.nextInt();
		int arr[]=new int[n];
		int food=r*unit;
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		int sum=0;
		
		for(int i=0;i<n;i++)
		{
			while(sum<food)
			{
				sum=sum+arr[i];
				i++;
			}
			System.out.println(i);
			break;
			
		}
		
		


	}

}
