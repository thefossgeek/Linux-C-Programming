/* Program No: 12 */
/* Date: 25.07.2022 */
/* Aim: Centigrade to Fahrenheit */

# include <stdio.h>

int main()
{
  float f,c;
  /* f = 70.0 */
  scanf("%f", &f);
  c = (5.0/9.0) * (f -32);
  printf("%f\n", c);
  return (0);
}
