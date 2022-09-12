#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdarg.h>
#include <string.h>

int main()

{


	float x1, x2, x3, y1, y2, y3;

	    printf("first point coordinates");

	        scanf("%f", &x1);

	        scanf("%f", &y1);

	        printf("second point coordinates");

	        scanf("%f", &x2);

	        scanf("%f", &y2);

	        printf("third point coordinates\n");

	        scanf("%f", &x3);

	        scanf("%f", &y3);

     float ax=x1-x2, ay=y1-y2, bx=x2-x3, by=y2-y3, cx=x3-x1, cy=y3-y1;
 
	 float a=sqrt(ax*ax+ay*ay);

 float b=sqrt(bx*bx+by*by);

 float c=sqrt(cx*cx+cy*cy);

 float S,P,p;

 P=a+b+c;

 p=P/2;

 S=sqrt(p*(p-a)*(p-b)*(p-c));

printf("S = %f\n", S );
printf("P = %f\n", P );

	return 0;


}