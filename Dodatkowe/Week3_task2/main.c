#include <stdio.h>
#include <stdlib.h>

int suma(){
    int suma =0;
    for(int i=11;i<=67;i++){
        if(i%2!=0){
            suma+=i;
        }
    }
    return suma;
}

int sumareku(int n){
    if(n<11){
        return 0;
    }else if(n>67){
        return 0;
    }
    if(n%2!=0){
        return n + sumareku(n-2);
    }
}

int main()
{
    printf("%d\n",suma());

    int suma = sumareku(67);
    printf("Suma: %d\n",suma);
    return 0;
}
