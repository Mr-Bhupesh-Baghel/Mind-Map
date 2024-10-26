//wap to find simple interest for five sets.
#include <stdio.h>
#include <conio.h>
void main() {
    float p, r, t, in;
    int i;
    clrscr();
    for (i = 1; i <= 5; i++) 
    {
	printf("Enter Principal, Rate (in percentage), and Time (in years) for set %d\n", i);
	    scanf("%f %f %f", &p, &r, &t);
        in = (p * r * t) / 100;
	printf("Set %d: Principal = %.2f, Rate = %.2f, Time = %.2f, Simple Interest = %.2f\n",
	       i, p, r, t, in);
    }
   printf("Enter eny key for exit.");
    getch();
}
