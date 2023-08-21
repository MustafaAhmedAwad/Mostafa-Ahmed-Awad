#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SDB.h"

void SDB_APP()
{
uint8 choice;
   do { 
    printf("                                                                                                   \n");
    printf("                                                                                                   \n");
    printf("               AAA               MMMMMMMM               MMMMMMMM IIIIIIIIII TTTTTTTTTTTTTTTTTTTTTTT\n");
    printf("              A:::A              M:::::::M             M:::::::M I::::::::I T:::::::::::::::::::::T\n");
    printf("             A:::::A             M::::::::M           M::::::::M I::::::::I T:::::::::::::::::::::T\n");
    printf("            A:::::::A            M:::::::::M         M:::::::::M II::::::II T:::::TT:::::::TT:::::T\n");
    printf("           A:::::::::A           M::::::::::M       M::::::::::M   I::::I   TTTTTT  T:::::T  TTTTTT\n");
    printf("          A:::::A:::::A          M:::::::::::M     M:::::::::::M   I::::I           T:::::T        \n");
    printf("         A:::::A A:::::A         M:::::::M::::M   M::::M:::::::M   I::::I           T:::::T        \n");
    printf("        A:::::A   A:::::A        M::::::M M::::M M::::M M::::::M   I::::I           T:::::T        \n");
    printf("       A:::::A     A:::::A       M::::::M  M::::M::::M  M::::::M   I::::I           T:::::T        \n");
    printf("      A:::::AAAAAAAAA:::::A      M::::::M   M:::::::M   M::::::M   I::::I           T:::::T        \n");
    printf("     A:::::::::::::::::::::A     M::::::M    M:::::M    M::::::M   I::::I           T:::::T        \n");
    printf("    A:::::AAAAAAAAAAAAA:::::A    M::::::M     MMMMM     M::::::M   I::::I           T:::::T        \n");
    printf("   A:::::A             A:::::A   M::::::M               M::::::M II::::::II       TT:::::::TT      \n");
    printf("  A:::::A               A:::::A  M::::::M               M::::::M I::::::::I       T:::::::::T      \n");
    printf(" A:::::A                 A:::::A M::::::M               M::::::M I::::::::I       T:::::::::T      \n");
    printf("AAAAAAA                   AAAAAAAMMMMMMMM               MMMMMMMM IIIIIIIIII       TTTTTTTTTTT      \n");
    printf("                                                                                                   \n");
    printf("                         with my all pleasure ,MOSTAFA AHMED AWAD :)                               \n");
                                                                                                 
    printf("\n\n\n");
   printf("====================================== WELCOME TO STUDENT DATABASE SYSTEM ======================================\n\n\n");
    printf("\t\t\t\t\t[1]=> ADD ENTERY\n");
    printf("\n");
    printf("\t\t\t\t\t[2]=> GET SIZE IN DATABASE\n");
    printf("\n");
    printf("\t\t\t\t\t[3]=> READ STUDENT\n");
    printf("\n");
    printf("\t\t\t\t\t[4]=> GET LIST OF ALL STUDENT IDS\n");
    printf("\n");
    printf("\t\t\t\t\t[5]=> CHECK IF ID EXIST\n");
    printf("\n");
    printf("\t\t\t\t\t[6]=> DELETE STUDENT DATA\n");
    printf("\n");
    printf("\t\t\t\t\t[7]=> CHECK DATABASE IS FULL\n");
    printf("\n");
    printf("\t\t\t\t\t[8]=> Exit  \n\n");
    printf("===============================================================================================================\n\n");

        scanf("%c", &choice);
        if (choice != 0) {
            SDB_action(choice);
        }
    } while (choice != 0);
}

void SDB_action(uint8 choice) {
    switch (choice) {
        case 1:
            SDB_AddEntry();
            break;
        case 2:
            SDB_GetUsedSize();
            break;
        case 3:
            SDB_ReadEntry();
            break;
        case 4:
            SDB_GetList();
            break;
        case 5:
            SDB_IsIdExist();
            break;
        case 6:
            SDB_DeletEntry();
            break;
        case 7:
            SDB_IsFull();
            break;
        case 0:
           exit(0);
           break;   
        default:
            printf("Invalid choice!\n");
    }
}
int main ()
{
    SDB_APP();
}
