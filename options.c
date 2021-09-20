#include "options.h"
#include "account.h"
 
 int a;
void login(){
}
void see(){
}
void options(int b)
{
switch(b)
{ int opt;
int i;

case 0:
	
	printf("Accounts \n");
	see();
	printf("1.Create 2.Change  3.Delete  4.Back  5.Exit");
	
	scanf("%d",&a);
	switch (a)
	{
	case	1:
		CreateAcc();
		options(ID);
		break;
	case    2:
		ChangePassword();
		options(ID);
		break;
	case	3:
		DeleteAcc();
		options(ID);
		break;
	case	4:
	options(ID);
	break;
	case	5:
	break;
	main();
	}
	
case 1:

	printf("1.Accounts \n 2.Create");
	see();

	printf("1.Create 2.Deposit 3.Withdraw 4.Transfer 5.Back  6.Exit");
	
	scanf("%d",&a);
	switch (a)
	{
	case	1:
		CreateAcc();
		options(ID);
	case 	2:
		Deposit();
		options(ID);
	case	3:
		Withdraw();
		options(ID);
	case	4:
		Transfer();	
		options(ID);
	case	5:
		options(b);
		options(ID);
		
					
	case	6:
		
		login();	
		options(b);
	default : printf("");
		}
		
default:
	printf("1.Change Password 2.Deposit 3.Withdraw 4.Transfer 5.Back  6.Exit");
	
	scanf("%d",&a);
	switch (a)
	{
	case	1:
		ChangePassword();
		options(ID);
	case 	2:
		Deposit();
		options(ID);
	case	3:
		Withdraw();
		options(ID);
	case	4:
		Transfer();	
		options(ID);
	case	5:
	  main();
		
					
	case	6:
		
		login();
		options(b);
	default : printf("bruh momentum");	
			
	
	
	
			
		
	}
	

}

}






