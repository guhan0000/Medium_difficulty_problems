
public class pwdchecker {

	static boolean check_start(String pwd)
	{
		if(pwd.charAt(0)>='0'&&pwd.charAt(0)<='9')
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	static boolean check_size(String pwd)
	{
		int len=pwd.length();
		if(len>=4)
		{
			return true;
		}
		else
			return false;
	}
	static boolean check_char(String pwd)
	{
		int numeric=0;
		int len=pwd.length();
		for(int i=0;i<len;i++)
		{
			if(pwd.charAt(i)>='0'&& pwd.charAt(i)<='9')
			{
				numeric++;
			}
			
		}
		if(numeric>=1)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
	static boolean check_capital(String pwd)
	{
		int capital=0;
		int len=pwd.length();
		for(int i=0;i<len;i++)
		{
			if(pwd.charAt(i)>='A'&& pwd.charAt(i)<='Z')
			{
				capital++;
			}
			
		}
		if(capital>=1)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
	
	static boolean check_space(String pwd)
	{
		if(pwd.contains(" ")||pwd.contains("/"))
		{
			return false;
		}
		else
			return true;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String pwd="a987 abC012";
		//int len=pwd.length();
	//System.out.print(check_start(pwd));
		if(check_start(pwd)&&check_size(pwd)&&
				check_char(pwd)&&check_capital(pwd)&&
				check_space(pwd))
		{
			System.out.print("valid password");
		}
		else
		{
			System.out.print("Invalid password");
		}
	}

}
