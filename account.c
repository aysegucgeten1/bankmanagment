#include"account.h"
#include<stdlib.h>

FILE *file;
void init(){

char accountmoney[20][10]={'/0'};
	char accounts[20][10]={'/0'};
char a[10];
int i;
int j=0;

for(i=0;i<20;i++)	
{
	
sprintf(a,"test%d.txt",i,10);
 file=fopen(a,"r");
 if (file) {
 	int c;
j=0;
    while ((accounts[i][j]= getc(file)) != EOF)
        {
        
       
        j++;
		}

    fclose(file);
}

	
}
for(i=0;i<20;i++)
for(j=0;accounts[i][j]!=0;j++)
{
	if(accounts[i][j]==";")
	{int a,b;
	for(a=0;a<j;a++)
	password[i][a]=accounts[i][a];
	for(b=0,a=j+1;accounts[i][a]!=EOF;b++,a++)
	{
	accountmoney[i][b]=accounts[i][a];
    }
    money[i]=atoi(accountmoney[i]);
	}
	
}

 


}
void ChangePassword(){char b[10];
if(ID>1)
{printf("new password?\n");
scanf("%s",password[ID]);
sprintf(b,"test%d.txt",ID,10);	
file=fopen(b,"w");	
fprintf(file,"%s;0",password[ID]);	
	
	}	
	
	
	
	
	
}
void CreateAcc(){char a[10]={"test0.txt"};
int i;
for(i=0,number=0;file!=NULL;number++,i++)
{file=fopen(a,"r");
if(file)
{
sprintf(a,"test%d.txt",i,10);

}
else
break;

}



char b[10];
sprintf(b,"test%d.txt",number,10);
file=fopen(b,"w+");
printf("password?\n");
scanf("%s",password[number]);
fprintf(file,"%s;0",password[number]);



}


void DeleteAcc(){int a;
char b[10]={'/0'};
	printf("which account?\n");
	scanf("%d",&a);
	sprintf(b,"test%d.txt",a,10);
	remove(b);
	
	
}



void Deposit()

{
int a,b;
if(ID==0||ID==1)	

{


printf("which account? \n");
scanf("%d \n",&a);
printf("how much? \n");
scanf("%d \n",&b);
money[a]+=b;
printf("new balance is %d$ \n 1.Back 2.Exit \n",money[a-1]);
scanf("%d",a);
if(a==1)
options(ID);
else if (a==2)
{login();
options(ID);
}
else 
printf("no");
}

else 
{

printf("how much?");
scanf("%d",&b);
money[ID]+=b;	
fprintf(file,"%s;%d",password[ID],money[ID]);
printf("your new balance is %d$\n 1.Back 2.Exit",money[ID]);
scanf("%d",a);
if(a==1)
options(ID);
else if (a==2)
{login();
options(ID);
}
else 
printf("no");	

}
}

void Withdraw()
{
int a,b;
if(ID==0||ID==1)	

{


printf("which account?");
scanf("%d",&a);
printf("how much?");
scanf("%d",&b);
money[a]-=b;
fprintf(file,"%s;%d",password[a],money[a]);
printf("new balance is %d$ \n 1.Back 2.Exit",money[a]);
scanf("%d",a);
if(a==1)
options(ID);
else if (a==2)
{login();
options(ID);
}
else 
printf("no");
}

else 
{

printf("how much?");
scanf("%d",&b);
money[ID]-=b;	
fprintf(file,"%s;%d",password[ID],money[ID]);
printf("your new balance is %d$\n 1.Back 2.Exit",money[ID]);
scanf("%d",a);
if(a==1)
options(ID);
else if (a==2)
{login();
options(ID);
}
else 
printf("no");	

}
}




void Transfer()

{
int a,b,c;
if(ID==0||ID==1)	

{


printf("from which account?");
scanf("%d",&a);
if(a<0)
{
printf("inaccurate value");
Transfer();}

printf("to which account?");
scanf("%d",&c);
if(c<0)
{
printf("inaccurate value");
Transfer();}
else

printf("how much?");
scanf("%d",&b);
money[a]-=b;
fprintf(file,"%s;%d",password[a],money[a]);
money[c]+=b;
fprintf(file,"%s;%d",password[c],money[c]);
printf("new balance is %d$ \n 1.Back 2.Exit",money[a]);
scanf("%d",a);
if(a==1)
options(ID);
else if (a==2)
{login();
options(ID);
}
else 
printf("no");
}

else 
{

printf("how much?");
scanf("%d",&b);
money[ID]+=b;	
printf("your new balance is %d$\n 1.Back 2.Exit",money[ID]);
scanf("%d",a);
if(a==1)
options(ID);
else if (a==2)
{login();
options(ID);
}
else 
printf("no");
}
}

