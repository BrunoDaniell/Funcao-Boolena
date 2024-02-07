#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool retornaBooleana();

int main()
{
    bool variavelBooleana;

    variavelBooleana = retornaBooleana();

    if (variavelBooleana) {
        printf("E verdadeiro!");
    }
    else {
        printf("E falso! :(");
    }
}

bool retornaBooleana() {
    return false;
}

