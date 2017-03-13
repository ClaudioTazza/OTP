#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NELEM 50

int main(){
  char c, choose, pwd[NELEM];
  int i = 0, lPass;

  printf("PASSWORD: ");
  fgets(pwd, NELEM, stdin);

  pwd[NELEM - 1] = '\0';
  lPass = strlen(pwd);

  while ((c = getchar()) != EOF){
    if(c >= 32 && c <= 126){
      c = ( (c - ' ') + (pwd[i++] - ' ') ) % 94 + ' ';
    }

    if(i > lPass) i = 0;
    putchar(c);
  }

  return 0;
}
