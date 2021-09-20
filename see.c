#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "account.h"
void Seeall(int ID) {
    int i;
    int j;
    char str1[] = "    ";
    char str2[] = "   ";
    char str3[] = "  ";
    int x;

    
    if (ID == 0)
    for (i = 0; i < 20; ++i) {

        for (j = 0; password[i][j]='0'; ++j) {
            printf("%c    ", password[i][j]);
            

        }
        printf("%d",money[i]);
        printf("\n");
    }
    else if (ID == 1) {
        printf("Which account you want to see please write the ID\n");
        scanf_s("%d", &x);
    
        for (j = 0; j < 20; ++j) {
           printf("%c",money[j]);
           
        }
     printf("\n");
	}
    
    else {
        for (j = 0; j < 10; ++j) {
            printf("%c   ", password[ID][j]);

          printf("%d,money[ID]");

        }
        printf("\n");
    }
    }
void EyeofSauron(int user, int ID, double Password)
{
    int decision;
    int Y = 1;
    int h;
    if (user == 0) {
        printf("\n");
        printf("welcome to The Eye Of Sauron System you want to see all? press 1/2\n");
        scanf_s("%d", &decision);
        printf("\n");
        if (decision == Y) {
            printf("you will be directed to System my dark Lord\n");
            Seeall(0);
            printf("if you want to exit my lord press 1\n");
            for (h = 0; h < 1;) {
                scanf_s("%d", &h);
            }
        }
        else {
            printf("Gandalf - Go back to your abbys if you have the fire of the Abbys I have the Flame of Anduril.\n");
            printf("\n");
            printf("You shall not PAAAS!!\n");
            printf("\n");
            Sleep(3000);
            printf("Great slience fills the room and suddenly you hear a voice\n");
            printf("\n");
            Sleep(5000);
            //return Options ()

        }
    }
    else if (user == 1) {
        Seeall(1);
        /*seeID(&ID, &V);
         ıf (V=1){
         printf("ID found you will be directed to it in a second");
         See(&ID);
         }
         else{
         printf("ID you enter can't be found please Check again or enter different ID");
         return 21;
         }
         */
    }
    else {
        printf("Looking for the ID\n", "%d", ID);
        Sleep(3000);
        Seeall(ID);
        /*seeID(&ID, &V);
         ıf (V=1){
         printf("ID found you will be directed to it in a second");
         See(&ID);
         }
         else{
         printf("ID you enter can't be found please Check again or enter different ID");
         return 21;
         }
         */
    }

}

