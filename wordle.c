#include <stdio.h>
#include <string.h>

char *choseWord();

int main(int argc, char *argv)
{
    
    if (argc != 2)
        printf("Usage error!\n");
    
    //escolhe palavra aleatoria
    char systemWord[6] = choseWord();

    int lifes = 6;
    char userWord[6];

    while (lifes > 0)
    {

    }
    //ve quais caracteres estao corretos e coloca em uppercase
    //quais tem na palavra e nao estao no lugar certo
}

char *choseWord()
{
    return "casa";
}