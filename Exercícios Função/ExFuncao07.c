
#include <stdio.h>

int numImpar(int i);

int main()
{
    int i;
    
    for(i = 1; i < 51; i++){
        numImpar(i);
    }
    
}

int numImpar(int i)
{
    if (i % 2 != 0)
    {
            return printf("Número: %d\n", i);
    }
   
}