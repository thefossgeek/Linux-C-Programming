#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("%ld%ld\n", sizeof('a'), sizeof("a"));
  return(0);  
}
