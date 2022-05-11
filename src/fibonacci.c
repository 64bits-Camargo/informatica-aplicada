#include <stdio.h>

int fibonacci(int n);

void main(){
    int n_size;
  
    printf("Digite o numero de termos da sequencia: ");
    scanf("%d", &n_size);
  
    for (int i=1; i <= n_size; i++) 
        printf("%d ", fibonacci(i));

    printf("\n");

}

int fibonacci(int n) {
    if (n == 1)
        return(0);
  
    if (n == 2) 
        return(1);
    
    return(fibonacci(n-1) + fibonacci(n-2));
}