/* Program No: 10 */
/* Date: 25.07.2022 */
/* Aim: Volume of a Cylinder */

# include <stdio.h>

int main()
{
  float r,h,v;
  /* r = 10.0 h = 8.0 */
  scanf("%f%f", &r, &h);
  v = 3.314 * r * r * h;
  printf("%f\n", v);
  return (0);
}
