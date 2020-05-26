#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	area( float r)
	{
		float s;
		s=r*r*3.14;
		return (s);
	}
	
	perimeter( float r)
	{
		float p;
		p = 2*3.14*r;
		return (p);
	}
 main(int argc, char *argv[]) {
	float r,s,p;
	printf ("nhap ban kinh: ");
	scanf ("%f", &r);
	
	s = area(r);
	printf ("dien tich hinh tron : %2f", s);
	p = perimeter(r);
	printf (" chu vi hinh tron : %2f", p);
	

}


