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

    char * userName;
    char * password;
    struct IndividualAccount * next;
}
        IndividualAccount;
typedef struct User {
    int uid;
    char * first_name;
    char * last_name;
    char * username;
    char * passwd;
    IndividualAccount ac;
}
        User;

int main() {
    int presentValue = -1;
    int option = 0;
    printf("Welcome to Paladin.\n");
    printf("Do you have an account? (Y/N)\n");
    printf("Peter can access this when the stars align properly+edit:) \n");
    struct User arr_Users[50];
    for (int i = 0; i < 50; i++) {
        arr_Users[i].first_name = NULL;
        arr_Users[i].last_name = NULL;
        arr_Users[i].username = NULL;
        arr_Users[i].passwd = NULL;
        arr_Users[i].uid = NULL;
    }
    //int i;
    do {
        printf("Press 1. To enter the Details of the new user: \n");
        printf("Press 2. To display all the users \n");
        printf("Press 3. To add an account to your user \n");
        printf("Press 4. To Login to your account: \n");
        printf("Press -1. To end the program: \n");
        scanf("%d", & option);
        if (option == 1) {

            char * First_Name = NULL;
            First_Name = malloc(sizeof(char * ));
            char * Last_Name = NULL;
            Last_Name = malloc(sizeof(char * ));
            char * uname = NULL;
            uname = malloc(sizeof(char * ));
            char * pass = NULL;
            pass = malloc(sizeof(char * ));
            printf("Enter Details for User %d \n", presentValue + 1);
            for (int i = 0; i < 50; i++) {
                if (arr_Users[i].uid == i) {
                    presentValue++;
                } else {
                    break;
                }
            }
            //printf("Value Presnt at: %s",arr_Users[i].first_name);
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
        if (option == 2) {
            for (int i = 0; i < presentValue + 1; i++) {
                printf("***************************************** \n");
                printf("User #%d \n", arr_Users[i].uid + 1);
                printf("First Name is %s \n", arr_Users[i].first_name);
                printf("Last Name is %s  \n", arr_Users[i].last_name);
                printf("Username is %s  \n", arr_Users[i].username);
                printf("Password is %s \n", arr_Users[i].passwd);
            }
            printf("***************************************** \n");
        }
        if(option==3)
        {
            if(arr_Users[0].uid=NULL)
            {
                printf("You do not have an account! Can not add details. \n");
            }
            else
            {
                char * user_Name = NULL;
                user_Name = malloc(sizeof(char * ));
                char * password = NULL;
                password= malloc(sizeof(char * ));
                printf("Please enter the Username/ Email which you want to add: \n");
                scanf("%s",user_Name);
                printf("Please enter the password of the account: \n");
                scanf("%s",password);
                arr_Users[0].ac.userName=user_Name;
                arr_Users[0].ac.password=password;
                printf("Username is: %s \n",arr_Users[0].ac.userName);
                printf("Password is: %s \n",arr_Users[0].ac.password);
                printf("Hello \n");
            }
        }

    }
    while (option != -1);
    return 0;
}
IndividualAccount * CreateNewAccount(char * username, char * passwd) {
    struct IndividualAccount * new_userAccount;
    new_userAccount = malloc(sizeof(struct IndividualAccount));
    if (new_userAccount == NULL) {
        printf("Error creating a new node.\n");
        exit(0);
    }
    new_userAccount->userName = username;
    new_userAccount->password = passwd;
    return new_userAccount;
}