/* 100 days code; Day 5: code2*/
 #include<stdio.h>
int main()
{
	int per, ar, a,b;
	printf("Enter width and length of the rectangle:");
	scanf("%d%d", &a, &b);
	per= a+a+b+b;
	ar=a*b;
	printf("The perimeter and area of the given rectangle is %d %d", per, ar);
	return 0;
}
