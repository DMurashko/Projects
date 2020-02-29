#include <stdio.h>

void f2 (int Hvv[2][1000]) {
	printf(
		"Size of the given array is %lu\n%lu\n%lu\n%lu\n%d\n%d\n%d\n%d\n%d\n", 
		sizeof(Hvv), 
		Hvv,
		*Hvv,
		*(Hvv+1), 
		*(*(Hvv+0)+0), 
		*(*Hvv+1),
		**(Hvv+1),
		*(*(Hvv+1)+2),
		sizeof(int)
	);
}

void ft_print_comb () {
	int a,b,c,d,e,Num[2][1000];
	Num[0][0] = 15;
	Num[0][1] = 38;
	Num[1][0] = 190;
	Num[1][2] = 75;
	f2(Num);
/*	int h=0;
	for (int i=0; i<10; i++) {
	  a = i*100;
	  for (int j=0; j<10; j++) {
	   b = j*10; 
	   if (b == a) {} else {
	   for (int k=0; k<10; k++) {
	    c = k;
	    if (c == a || c == b) {} else {
	    d = a+b+c;
            e = i+j+k;
	    for (int g=0; g<1000; g++) {
		if (Num[2][g] == e) {} else {h=h+1; Num[1][h]=d; Num[2][h]=e;}
		}
	    }
	    }
	  } 
	  }
	}

	for (int f=0; f<=h; f++) {
	printf("%d ", Num[1][f]);
}*/
}


int main () {
	ft_print_comb();
	return (0);
}
