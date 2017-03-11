#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NELEM 50

int main(){
  char c, pwd[NELEM];
  int i = 0, lPass;

  puts("PASSWORD");
  fgets(pwd, NELEM, stdin);

  pwd[NELEM - 1] = '\0';
  lPass = strlen(pwd);

  for(; i < lPass; ++i){
    printf("%c", pwd[i]);
  }
  /*while ((c = getchar()) != EOF){
    if(c >= 65 && c <= 90)
      c = (c + (pwd[i++] - 'A') - 'A') % 26 + 'A';

    if(i > lPass) i = 0;

    putchar(c);
  }*/


  return 0;
}
