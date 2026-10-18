#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

struct Player player1;
struct Player player2;

int main()
{
    /*struct are collection of related members, 
    i.e., variables, can be of different data types,
    all listed under one name in a block of memory,
    similar to class in other languages, but no methods 
    in structs*/

    strcpy(player1.name, "Hep");
    player1.score = 5;

    strcpy(player2.name, "Hop");
    player2.score = 4.5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}