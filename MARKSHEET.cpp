#include <stdio.h>
int main()
{
      int m,p,c,e,h;
      (m,p,c,e,h)<=100;
      float t,a;
      printf("marks of maths\t");
      scanf("%d", &m);
      printf("marks of physics\t");
      scanf("%d", &p);
	  printf("marks of computer\t");
      scanf("%d", &c);
	  printf("marks of english\t");
      scanf("%d", &e);
	  printf("marks of hindi\t");
      scanf("%d", &h);
      t=m+p+c+e+h;
      printf("total marks out of 500=%f",t);
      a=t/5;
      printf("\ntotal percentage=%f",a);
      return 0;
}