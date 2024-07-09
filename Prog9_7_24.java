
public class Prog9_7_24 {
	static int difference(int n,int m)
	{
		int sum1=0;
		int sum2=0;
		int diff;
		for(int i=1;i<=m;i++)
		{
			if(i%n==0)
			{
				sum1=sum1+i;
			}
			else
			{
				sum2=sum2+i;
			}
		}
		diff=sum2-sum1;
		return diff;
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n=4;
		int m=20;
		System.out.println(difference(n,m));
		

	}

}
