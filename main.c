//CNIT 31500 Final Group Project
//Vivian Phan
//Peter Shoaf
//Lancia Raja
//Shyam Merchant

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <math.h>

typedef struct IndividualAccount {
    int aid;

    char *userName;
    char *password;
    struct IndividualAccount *next;
}
        IndividualAccount;
typedef struct User {
    int uid;
    char *first_name;
    char *last_name;
    char *username;
    char *passwd;
    IndividualAccount ac;
}
        User;

int main() {
    int presentValue = -1;
    int userId=-1;
    int optionOne = 0;
    int option = 0;
    int grantAccess=0;
    void displayWelcome();
    void loginFunctions(int presentValue,User arr_Users[50]);
    struct User arr_Users[50];
    for (int i = 0; i < 50; i++) {
        arr_Users[i].first_name = NULL;
        arr_Users[i].last_name = NULL;
        arr_Users[i].username = NULL;
        arr_Users[i].passwd = NULL;
        arr_Users[i].uid = NULL;
    }
    for (int i = 0; i < 50; i++) {
        if (arr_Users[i].uid == i) {
            presentValue++;
        } else {
            break;
        }
    }
    displayWelcome();
    do {
        printf("Press 1. to Login: \n");
        printf("Press 2. to Create an Account \n");
        printf("Press 3. to Exit the program: \n");
        scanf("%d", &optionOne);

        if (optionOne == 1) {
            char *loginUsername = NULL;
            loginUsername = malloc(sizeof(char *));
            char *loginPassword = NULL;
            loginPassword == malloc(sizeof(char *));
            printf("Please enter your username: \n");
            scanf("%s", loginUsername);
            printf("Please enter your password: \n");
            scanf("%s", loginPassword);
            for (int i = 0; i < presentValue; i++) {
                if (loginUsername = arr_Users[i].username && loginPassword == arr_Users[i].passwd) {
                    grantAccess = 1;
                    userId = arr_Users[i].uid;

                }
            }
            if (grantAccess = 1) {
                printf("Welcome User: %s", arr_Users[userId].first_name);
                loginFunctions(grantAccess, arr_Users);
            } else if (grantAccess == 0) {
                printf("The Login was incorrect: \n");
            }
        }
        if (optionOne == 2) {
            char *First_Name = NULL;
            First_Name = malloc(sizeof(char *));
            char *Last_Name = NULL;
            Last_Name = malloc(sizeof(char *));
            char *uname = NULL;
            uname = malloc(sizeof(char *));
            char *pass = NULL;
            pass = malloc(sizeof(char *));
            printf("Enter Details for User %d \n", presentValue + 1);
            printf("Present Value: %d", presentValue);

            for (int i = presentValue; i < presentValue + 1; i++) {
                printf("Please Enter the First Name:");
                scanf("%s", First_Name);
                printf("Please Enter the Last Name:");
                scanf("%s", Last_Name);
                printf("Please Enter the Username:");
                scanf("%s", uname);
                printf("Please Enter the Password:");
                scanf("%s", pass);
                arr_Users[i].uid = i;
                arr_Users[i].first_name = First_Name;
                arr_Users[i].last_name = Last_Name;
                arr_Users[i].username = uname;
                arr_Users[i].passwd = pass;
            }
            //presentValue++;
            for (int i = presentValue; i < presentValue + 1; i++) {
                printf("***************************************** \n");
                printf("User #%d \n", arr_Users[i].uid + 1);
                printf("First Name is %s \n", arr_Users[i].first_name);
                printf("Last Name is %s  \n", arr_Users[i].last_name);
                printf("Username is %s  \n", arr_Users[i].username);
                printf("Password is %s \n", arr_Users[i].passwd);
            }
            printf("***************************************** \n");
        }

        if (optionOne == 3) {

        }
    }
    while(optionOne!=-1);
    return 0;
}

IndividualAccount *CreateNewAccount(char *username, char *passwd) {
    struct IndividualAccount *new_userAccount;
    new_userAccount = malloc(sizeof(struct IndividualAccount));
    if (new_userAccount == NULL) {
        printf("Error creating a new node.\n");
        exit(0);
    }
    new_userAccount->userName = username;
    new_userAccount->password = passwd;
    return new_userAccount;
}

void displayWelcome() {
    printf("                      ███████                       \n");
    printf("                      ███11███                     \n");
    printf("                      ██1111██                      \n");
    printf("                      ███11███                      \n");
    printf("                       ██11██                       \n");
    printf("                      ██████                       \n");
    printf("                     ████████                      \n");
    printf("                  ████████████                    \n");
    printf("             ██████████████████████               \n");
    printf("        ████████████████████████████            \n");
    printf("             ████111111111111111111████             \n");
    printf("               ██████████████████                 \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                      ██_11_██                      \n");
    printf("                       ██__██                       \n");
    printf("                        ████                        \n");
    printf("                         ██                         \n");
    printf("††††††††††††††††††††††††††††††††††††††††††††††††††††\n");
    printf("†                     PALADIN:                     †\n");
    printf("† PROTECTING THE HOLY WORDS SINCE THE 13TH CENTURY †\n");
    printf("†                                                  †\n");
    printf("†                                                  †\n");
    printf("†                 Created  By:                     †\n");
    printf("†                   Peter  Shoaf                   †\n");
    printf("†                   Shyam  Merchant                †\n");
    printf("†                  Vivian  Phan                    †\n");
    printf("†                  Lancia  Raja                    †\n");
    printf("†                                                  †\n");
    printf("†                                                  †\n");
    printf("†                                                  †\n");
    printf("†                                                  †\n");
    printf("†                                                  †\n");
    printf("†                    Deus Vult!                    †\n");
    printf("††††††††††††††††††††††††††††††††††††††††††††††††††††\n");
}
void loginFunctions(int presentValue,User arr_Users[50])
{
    int option=0;
    do {


        printf("Press 1. To add an account to your user \n");
        printf("Press 4. To Login to your account: \n");
        printf("Press -1. To end the program: \n");
        scanf("%d", &option);
        if (option == 1) {
            if (arr_Users[0].uid = NULL) {
                printf("You do not have an account! Can not add details. \n");
            } else {
                char *user_Name = NULL;
                user_Name = malloc(sizeof(char *));
                char *password = NULL;
                password = malloc(sizeof(char *));
                printf("Please enter the Username/ Email which you want to add: \n");
                scanf("%s", user_Name);
                printf("Please enter the password of the account: \n");
                scanf("%s", password);
                arr_Users[0].ac.userName = user_Name;
                arr_Users[0].ac.password = password;
                printf("Username is: %s \n", arr_Users[0].ac.userName);
                printf("Password is: %s \n", arr_Users[0].ac.password);
            }
        }

    } while (option != -1);
}