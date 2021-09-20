#include"options.h"
#include"login.h"
#include"see.h"
void init();
void ChangePassword();
void Deposit();
void Transfer();
void Withdraw();
void CreateAcc();
void DeleteAcc();
static int ID;
static int money[10];
static char password[10][10];
static int number;
