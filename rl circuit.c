#include<stdio.h>
#include<math.h>

int main(){
	double v, r, c, l, t, i; //dif eq of basic rl circuit: i(t)=V/R + C*e^(-R*t/L)
	
	printf("Enter voltage (in volts): ");
	scanf("%lf", &v);
	printf("\nEnter resistance: (in ohms): ");
	scanf("%lf", &r);
	printf("\nEnter capacitance (in farads): ");
	scanf("%lf", &c);
	printf("\nEnter inductance (in henries): ");
	scanf("%lf", &l);
	
	for(t=0; t<=0.1; t+0.01){
		i=v/r + c*exp(-r*t/l);
		printf("Current at %lf seconds is: %lf\n", t, i);
	}
	
	return 0;
}
