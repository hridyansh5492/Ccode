#include <stdio.h>
#include <string.h>

typedef char user[25]; //one way, if want an datatype to be called by this name

typedef struct
{
    char name[30];
    int id;
    int pass;
}User;
//by this method, we don't need to use struct while using the specified struct

int main()
{
    /*typedef is a reserved keyword that gives 
    an exisiting datatype a "nickname"*/

    user usr1 = "Hep";// first way

    printf("%s\n", usr1);

    User us1 = {"Hr", 1234, 5646};
    User us2 = {"Jb", 1344, 5876};

    printf("%s\n", us1.name);
    printf("%d\n", us1.id);
    printf("%d\n", us1.pass);

    printf("%s\n", us2.name);
    printf("%d\n", us2.id);
    printf("%d\n", us2.pass);

    return 0;
}