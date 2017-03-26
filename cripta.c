#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NELEM 50

int main(){
  char c, choose, pwd[NELEM];
  int i = 0, lPass;

  printf("CHOOSE YOUR PASSWORD: ");
  fgets(pwd, NELEM, stdin);
  //Inerisci la Pass

  lPass = strlen(pwd) - 1;
  //Lunghezza Pass

  while ((c = getchar()) != EOF)
  {//Finche non finisce il file
    
    if(lPass > i) i = 0;
    //se la password e' più corta del messaggio la ripete

    if(c >= 32 && c <= 126){
      c = ( (c - ' ') + (pwd[i++] - ' ') ) % 94 + ' ';
    }//Se il messaggio e' compreso da caratteri consentiti converte i caratteri 

    putchar(c);//Stampa
  }

  return 0;
}
