#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int ID ;

int entry(){   
    printf("\n\n\n\t\t\t\t\t\t  Welcome to the Bank \n\t\t\t\t\t User Login ");
    printf("Please enter your ID number\n");
    scanf("%d", &ID);
    if (ID==1)
    {
        printf("You are transferred to the Administrator Login Page\n");
        Admin();
       
    }
    else if (ID==2)
    {
        printf("You are transferred to the Staff Login Page\n");
        Staff();
    }
    else
    {
        printf("You are transferred to the Customer Login Page\n");
        customer();
    }
    return 0;
}

int Admin()
{
    char rxAdmin[50];
    char adminTrue[50];
    int main_exit2;
    memset(adminTrue, 0x00, 50);
    memset(rxAdmin, 0x00, 50);
    int j=0;
    printf("\n\n\n\n\n\t\t\t\tPlease enter the password:");
    scanf("%s", rxAdmin);
    FILE* filep2 = fopen("adminPassword.txt", "r");
    if (filep2) {
        int a =0;

        while ((a = getc(filep2)) != EOF)
        {
            adminTrue[j] = a;
            j++; 
        } 
        if (strstr(adminTrue, rxAdmin))
        {
            printf("password matched! You are transferred to the admin menu");
            adminMain();
            
        }
        else
        {
            printf("\n\n The password you entered is incorrect. Please try again");
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf_s("%d", &main_exit2);
            if (main_exit2 == 1)
            {
                Admin();
            }
            else if (main_exit2 == 0)
            {
                return 0;
            }
            else
            {
                printf("\nInvalid!");
            }
        }
    }

}

int Staff()
{
    char rxStaff[50];
    char trueStaff[50];
    int main_exit3;
    memset(rxStaff, 0x00, 50);
    memset(trueStaff, 0x00, 50);
    int k = 0;
    printf("\n\n\n\n\n\t\t\t\tPlease enter the password:");
    scanf("%s", rxStaff);
    FILE* filep3 = fopen("staffPassword.txt", "r");
    if (filep3) {
        int b = 0;

        while ((b = getc(filep3)) != EOF)
        {
            trueStaff[k] = b;
            k++;
        }
        if (strstr(rxStaff, trueStaff))
        {
            printf("password matched! You are transferred to the admin menu");
            staffMain();
        }
        else
        {
            printf("\n\n The password you entered is incorrect. Please try again");
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf_s("%d", &main_exit3);
            if (main_exit3 == 1)
            {
                Staff();
            }
            else if (main_exit3 == 0)
            {
                return 0;
            }
            else
            {
                printf("\nInvalid!");
            }
        }
    }
}

int ekle() {
    {
        FILE* filep4;
        char sifre[80];
        float hesap;
        filep4 = fopen("sifreyusuf.txt", "a");
        if (filep4 == NULL)
            printf("Surucu bulunamadi.\n");
        else
        {
            printf("sifre giriniz :\n");
            scanf("%s", sifre);
            printf("Hesap miktarını giriniz (YTL):\n");
            scanf("%f", &hesap);
            fprintf(filep4, "%s\t%8.2f\n", sifre, hesap);
            fclose(filep4);
        }

    }
}
    /* Girilen isme ait hesap özetini veren fonksiyon */
    int customer(){
        FILE* filep4;
        char trueCustomer[80], rxCustomer[80];
        float account;
        int main_exit;
        int fileName = 0;
        char nameBuffer[50];
        printf("which file?\n");
        scanf("%d", &fileName);
        sprintf(nameBuffer, "sifre%d.txt", fileName);
        

        filep4 = fopen(nameBuffer, "r");
        if (filep4 == NULL)
            printf("Dosya bulunamadi.\n");
        else
        {
            printf("enter your password : ");
            scanf("%s", rxCustomer);
            while (fscanf(filep4, "%s", trueCustomer) != EOF)
            {
                fscanf(filep4, "%f", &account);
                if (!strcmp(trueCustomer, rxCustomer))
                {
                    printf("your balance %f", account);
                    break;
                }
                else
                {
                    printf("\n\n The password you entered is incorrect. Please try again");
                    printf("\nEnter 1 to try again and 0 to exit:");
                    scanf_s("%d", &main_exit);
                    if (main_exit == 1)
                    {
                        customer();
                    }
                    else if (main_exit == 0)
                    {
                        return 0;
                    }
                    else
                    {
                        printf("\nInvalid!");
                    }
                }

            }
            fclose(filep4);



        }
 }


   
  

int adminpage() {
    return 0;
}
int customerMain() {
    return 0;
}
int adminMain() {
    return 0;
}
int staffMain(){
}
int main() { 

    entry();
   /* Admin();
    Staff();
    adminpage();
    customerMain();
    Customer();
    adminMain();*/
    return 0;
}