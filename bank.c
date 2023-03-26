#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
 
// Declaring all the functions
void checkbalance(char*);
void transfermoney(void);
void display(char*);
void person(char*);
void login(void);
void loginsu(void);
void account(void);
void accountcreated(void);
void afterlogin(void);
void logout(void);
 
// Declaring gotoxy
// function for setting
// cursor position
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
 
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}
 
// Creating a structure to store
// data of the user
struct pass {
    char username[50];
    int date, month, year;
    char pnumber[15];
    char adharnum[20];
    char fname[20];
    char lname[20];
    char fathname[20];
    char mothname[20];
    char address[50];
    char typeaccount[20];
};
 
// Structure to keep track
// of amount transfer
struct money {
    char usernameto[50];
    char userpersonfrom[50];
    long int money1;
};
 
struct userpass {
    char password[50];
};
 
// Driver Code
int main()
{
    int i, a, b, choice;
    int passwordlength;
 
    gotoxy(20, 3);
 
    // Creating a Main
    // menu for the user
    printf("WELCOME TO BANK ACCOUNT SYSTEM\n\n");
    gotoxy(18, 5);
 
    printf("************************************\n");
    gotoxy(25, 7);
 
    printf("DEVELOPER-Anubhav Garg\n");
 
    gotoxy(20, 10);
    printf("1.... CREATE A BANK ACCOUNT \n");
 
    gotoxy(20, 12);
    printf("2.... ALREADY A USER? SIGN IN \n");
    gotoxy(20, 14);
    printf("3.... EXIT\n\n");
 
    printf("\n\nENTER YOUR CHOICE..");
 
    scanf("%d", &choice);
 
    switch (choice) {
    case 1:
        system("cls");
        printf("\n\n USERNAME 50 CHARACTERS MAX!!");
        printf("\n\n PASSWORD 50 CHARACTERS MAX!!");
        account();
        break;
 
    case 2:
        login();
        break;
 
    case 3:
        exit(0);
        break;
 
        getch();
    }
}
 
// Function to create accounts
// of users
void account(void)
{
    char password[20];
    int passwordlength, i, seek = 0;
    char ch;
    FILE *fp, *fu;
    struct pass u1;
    struct userpass p1;
 
    struct userpass u2;
 
    // Opening file to
    // write data of a user
    fp = fopen("username.txt", "ab");
 
    // Inputs
    system("cls");
    printf("\n\n!!!!!CREATE ACCOUNT!!!!!");
 
    printf("\n\nFIRST NAME..");
    scanf("%s", &u1.fname);
 
    printf("\n\n\nLAST NAME..");
    scanf("%s", &u1.lname);
 
    printf("\n\nFATHER's NAME..");
    scanf("%s", &u1.fathname);
 
    printf("\n\nMOTHER's NAME..");
    scanf("%s", &u1.mothname);
 
    printf("\n\nADDRESS..");
    scanf("%s", &u1.address);
 
    printf("\n\nACCOUNT TYPE");
    scanf("%s", &u1.typeaccount);
 
    printf("\n\nDATE OF BIRTH..");
    printf("\nDATE-");
    scanf("%d", &u1.date);
    printf("\nMONTH-");
    scanf("%d", &u1.month);
    printf("\nYEAR-");
    scanf("%d", &u1.year);
 
    printf("\n\nADHAR NUMBER");
    scanf("%s", u1.adharnum);
 
    printf("\n\nPHONE NUMBER");
    scanf("%s", u1.pnumber);
 
    printf("\n\nUSERNAME.. ");
    scanf("%s", &u1.username);
 
    printf("\n\nPASSWORD..");hlo