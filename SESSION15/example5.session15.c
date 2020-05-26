#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	a=b=c=0;
	printf ("nhap gia tri a: ");
	scanf ("%d", &a);
	printf ("nhap gia tri b: ");
	scanf ("%d", &b);
	c = adder (a,b);
	printf ("a&b in main() are: %d %d\n", a,b);
	printf (" c in main() is :%d\n" , c);
}
	adder (int a, int b)
	{
	int c;
		c = a+b;
		a *=a;
		b +=5;
		printf ("a&b within adder function are: %d,%d\n", a,b );
		printf ("c within adder function is : %d\n", c);
		return( c);
	}
	

