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
    int presentValue = 1;
    int userId=-1;
    int optionOne = 0;
    int option = 0;
    int grantAccess=0;
    void displayWelcome();
    void loginFunctions(int presentValue,User arr_Users[50]);
    struct User arr_Users[50];
    int encrypt();
    for (int i = 0; i < 50; i++) {
        arr_Users[i].first_name = NULL;
        arr_Users[i].last_name = NULL;
        arr_Users[i].username = NULL;
        arr_Users[i].passwd = NULL;
        arr_Users[i].uid = -1;
    }
    arr_Users[0].first_name ="Shyam";
    arr_Users[0].last_name = "Merchant";
    arr_Users[0].username = "smercha";
    arr_Users[0].passwd = "abcd@123";
    arr_Users[0].uid = 0;
    /*
    for (int i = 0; i < 50; i++) {
        if (arr_Users[i].uid == i) {
            presentValue++;
        } else {
            break;
        }
    }
     */
    displayWelcome();
    do {
        printf("Press 1. to Login: \n");
        printf("Press 2. to Create an Account \n");
        printf("Press 3. to exit the program: \n");
        scanf("%d", &optionOne);

        if (optionOne == 1) {
            char *loginUsername;
            loginUsername = malloc(sizeof(char *));
            char *loginPassword;
            loginPassword = malloc(sizeof(char *));
            int z=0;
            printf("Please enter your username: \n");
            scanf("%s", loginUsername);
            printf("Please enter your password: \n");
            scanf("%s", loginPassword);
            //loginFunctions(arr_Users[0].uid,arr_Users);
            char *compUNAME;
            compUNAME = malloc(sizeof(char *));
            char *compPass;
            compPass = malloc(sizeof(char *));
            while(compUNAME!=NULL)
            {
                compUNAME=arr_Users[z].username;
                compPass=arr_Users[z].passwd;
                if (strcmp(compUNAME,loginUsername)==0 && strcmp(compPass,loginPassword)==0)
                {
                    grantAccess = 1;
                    userId = arr_Users[z].uid;
                    break;
                }
                else
                {
                    z++;
                }
            }
            if (grantAccess == 1) {
                printf("\nWelcome User: %s\n", arr_Users[userId].first_name);
                loginFunctions(userId, arr_Users);
            }
            else
            {
                printf("The Login was incorrect: \n");
                printf("The function is: \n");
                printf("Username: %s",compUNAME);
                printf("Password: %s",compPass);
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

            for (int i = presentValue; i < presentValue + 1; i++)
            {
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

            for (int i = presentValue; i < presentValue + 1; i++)
            {
                printf("***************************************** \n");
                printf("User #%d \n", arr_Users[i].uid + 1);
                printf("First Name is %s \n", arr_Users[i].first_name);
                printf("Last Name is %s  \n", arr_Users[i].last_name);
                printf("Username is %s  \n", arr_Users[i].username);
                printf("Password is %s \n", arr_Users[i].passwd);
            }
            printf("***************************************** \n");
            presentValue++;
        }
        if (optionOne == 3) {
            exit(0);
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
    printf("                      ██11111██                      \n");
    printf("                      ███11███                      \n");
    printf("                       ██111██                       \n");
    printf("                      ██████                       \n");
    printf("                     ████████                      \n");
    printf("                  ████████████                    \n");
    printf("             ██████████████████████                \n");
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
    printf("††††††††††††††††††††††††††††††††††††††††††††††††††††††††††††††††††††††††††††\n");
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
    int encrypt();
    int currValue=presentValue;
    int option=0;
    struct IndividualAccount arr_Accounts[50];
    do {


        printf("Press 1. To add an account to your user \n");
        printf("Press 2. To view the accounts saved in the username \n");
        printf("Press 3. Check Password Strength: \n");
        printf("Press 4. To Encrypt a Password \n");
        printf("Press -1. To go to main menu: \n");
        scanf("%d", &option);
        if (option == 1)
        {

            if (arr_Users[presentValue].uid == -1) {
                printf("You do not have an account! Can not add details. \n");
            } else
            {
                for (int i=currValue;i<currValue+1;i++)
                {
                    char *user_Name = NULL;
                    user_Name = malloc(sizeof(char *));
                    char *password = NULL;
                    password = malloc(sizeof(char *));
                    printf("Please enter the Username/ Email which you want to add: \n");
                    scanf("%s", user_Name);
                    printf("Please enter the password of the account: \n");
                    scanf("%s", password);
                    arr_Accounts[currValue].aid=currValue;
                    arr_Accounts[currValue].userName = user_Name;
                    arr_Accounts[currValue].password=password;
                    printf("Username is: %s \n", arr_Accounts[currValue].userName);
                    printf("Password is: %s \n", arr_Accounts[currValue].password);
                }
                currValue++;
            }
        }
        if(option==2)
        {
            for (int i = presentValue; i < presentValue+1; i++)
            {
                printf("***************************************** \n");
                printf("User #%d \n", arr_Users[i].uid + 1);
                printf("First Name is %s \n", arr_Users[i].first_name);
                printf("Last Name is %s  \n", arr_Users[i].last_name);
                printf("Username is %s  \n", arr_Users[i].username);
                printf("Password is %s \n", arr_Users[i].passwd);

            }
            printf("----------------------------------------- \n");
            for(int i=presentValue;i<currValue;i++)
            {
                printf("The %d account saved for user is: \n", arr_Accounts[i].aid);
                printf("Username: %s\n", arr_Accounts[i].userName);
                printf("Password: %s\n", arr_Accounts[i].password);
                printf("----------------------------------------- \n");
            }
        }
        if(option==3)
        {
            void check(char a[]);
            char a[100];
            printf("Enter your password that should satisfy the following criteria\n1. password should contain atleast one capital letter\n2. should have one digit from(o-9)\n3. atleast one special charecter($,*,#,&)\n4. length should be atleast 6\n");
            scanf("%s",a);
            check(a);
        }
        if(option==4)
        {
        encrypt();
        }

    } while (option != -1);
}
//EXTERNAL API CODE DUE TO NETWORK ERROR
void check(char a[])
{
    char c;
    int len,i,flag1=0,flag2=0,flag3=0,flag4=0;
    len=strlen(a);
    if(len<6)
        flag1=1;
    else
    {
        for(i=0;i<len;i++)
            if((a[i]>=48&&a[i]<=58))
            {
                flag2=0;

                break;
            }
            else
                flag2=1;

        for(i=0;i<len;i++)
            if((a[i]>=65&&a[i]<=90))
            {
                flag3=0;

                break;
            }
            else
                flag3=1;

        for(i=0;i<len;i++)
            if(a[i]=='#'||a[i]=='$'||a[i]=='*'||a[i]=='&')
            {
                flag4=0;

                break;
            }
            else
                flag4=1;


    }
    if(flag1==1||flag2==1||flag3==1||flag4==1)
        printf("\nPassword Standards Not Met: \n");
    else
        printf("your password is successfully created\n");


    return;
}
//EXTERNAL API CODE DUE TO NETWORK ERROR
int encrypt()
{
    int i, x;
    char str[100];

    printf("\nPlease enter a string:\t");
    gets(str);

    printf("\nPlease choose following options:\n");
    printf("1 = Encrypt the string.\n");
    printf("2 = Decrypt the string.\n");
    scanf("%d", &x);

    //using switch case statements
    switch(x)
    {
        case 1:
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value

            printf("\nEncrypted string: %s\n", str);
            break;

        case 2:
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] - 3; //the key for encryption is 3 that is subtracted to ASCII value

            printf("\nDecrypted string: %s\n", str);
            break;

        default:
            printf("\nError\n");
    }

}