import java.util.*;
public class RollnoString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.print("enter n");
		
		int n=sc.nextInt();
		String names[]=new String[n];
		int rollnos[]=new int[n];
		System.out.print("enter names");
		for(int i=0;i<n;i++)
		{
			names[i]=sc.next();
		}
		System.out.print("enter rollnos ");
		for(int i=0;i<n;i++)
		{
			rollnos[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			if(rollnos[i]>=121 && rollnos[i]<=150)
			{
				if(rollnos[i]%2==0)
				{
					System.out.println(rollnos[i]+" "+names[i]);
				
				}
			}
		}
		/*for(int i=0;i<n;i++)
		{
			System.out.println(rollnos[i]);
			System.out.println(names[i]);
		}*/
	//	for(int i=0;i<n;names[i++]=sc.next());
		//System.out.print("enter rollnos");
		//for(int i=0;i<n;rollnos[i++]=sc.nextInt());
		
		//for(int i=0;i<n;System.out.println(rollnos[i]));
		
		

	}

}
