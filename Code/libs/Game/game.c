#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../Bool/bool.c"

typedef struct palavra
{
    char palavra[30];
    char tema[30];
}Pal;

/*
 * Função para randomizar uma nova palavra
 * 
 * param p: quem vai receber a palavra
 * param f_name: caminho do arquivo com as palavras
 * 
 * return true: se conseguiu randomizar
 * return false: se não conseguiu randomizar
*/
Bool randPal(Pal *p, char *f_name)
{

}
