#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	 giaithua (int a)
	
	{
	int i;
	float c = 1.0;
	for(i = 1; i <= a; i++) /* n la doi so cua ham giai thua */
	c = c*i; /* c la sum<tong> cua giai thua */
	return c;
	}
main(int argc, char *argv[]) {
	int a; 
	printf(" nhap gia tri: ");
	scanf ("%d", &a);
	

	printf ("giai thua cua mot so nguyen %d la %d ",a, giaithua(a)) ;
	return 0;

}
