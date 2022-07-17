#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("%ld%ld\n", sizeof('ac'), sizeof("ac"));
  return(0);  
}
