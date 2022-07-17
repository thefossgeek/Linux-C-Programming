#include <stdio.h>

int main(int argc, char *argv[])
{
  char ch = 'a';
  printf("%ld%ld\n", sizeof(ch), sizeof('a'));
  return(0);  
}
