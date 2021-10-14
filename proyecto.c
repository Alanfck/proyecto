// fue tomado del link de abajo 
// URL:https://parzibyte.me/blog/2019/10/16/sumar-valores-arreglo-c-obtener-sumatoria/
// Modificado por Alan Yair Cortes Lopez
#include <stdbool.h>
#define N 10 
 int a[N] = {10,2,3,4,5,6,7,8,9,10};

int suma(int a, int b)
{
    int sum;
    
    sum = b;
    b = a + b;
    a=sum;
    return a;
}

int sumatoria(int *a, int b)
{
    int s = a[0];
    for (int i = 1; i < b; i++)
        s += suma(s, a[i]);
    return s;
}

int main(){
    int s = sumatoria(a, N);
    return 0;
    }
