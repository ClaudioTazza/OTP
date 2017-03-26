#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 1024

int main(){
  char c, choose, pwd[SIZE];
  unsigned int i = 0, lPass;

  do{
    printf("INSERT PASSWORD: ");
    fgets(pwd, SIZE, stdin);
    //Inerisci la Pass

    lPass = strlen(pwd) - 1;
    //Lunghezza Pass

    if(lPass <= 0)
      puts("PLEASE INSERT PASSWORD\n");

  }while(lPass <= 0);
  
  while ((c = getchar()) != EOF)
  {//Finche non finisce il file
    
    if(lPass > i) i = 0;
    //se la password e' più corta del messaggio la ripete

    if(c >= 32 && c <= 126){
      c = ( (c - ' ') - (pwd[i++] - ' ') + 94 ) %94 + ' ';
    }//Se il messaggio e' compreso da caratteri consentiti converte i caratteri 

    putchar(c);//Stampa
  }

  return 0;
}

