#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numeros[] = {20, 500, 10, 5, 100, 1, 50};
    int n;

    printf("Diga um número: \n");
    scanf("%d", &n);
    for (int i = 0; i < 7; i++)
    {
        if (numeros[i] == n)
        {
            printf("Encontrado!\n");
            return 0;
        }
    }
    printf("Não encontrado...\n");
    return 1;
}