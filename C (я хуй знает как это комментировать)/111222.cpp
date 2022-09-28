#include <stdio.h>
int fibonacci(int n) {
   int i, u1=1, u2=1, u3; //dwa pierwsze wyrazy
   for (i=3; i<=n; i++){
       u3=u1+u2;
       u1=u2;
       u2=u3;
   }
   return u3;
}

fibonacci_rekurencyjnie(int n){
	//u3=u1+u2;
	//if (n<2) return n;
	if (n<=2) return 1;
	else return fibonacci_rekurencyjnie(n)=fibonacci_rekurencyjnie(n-2)+fibonacci_rekurencyjnie(n-1);
}
	
int main(void) {
   int n, result;
   printf("Ktory element ciagu Fibonacciego obliczyc? ");
   scanf("%d", &n);
   result = fibonacci(n);
   printf("fibonacci: element nr %d = %d\n", n, result);
   result = fibonacci_rekurencyjnie(n);
   printf("fibonacci: element nr %d = %d\n", n, result);
   return 0;
}
