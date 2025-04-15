#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int fre0=0, fre1=0, fre2=0, fre3=0, fre4=0, fre5=0, fre6=0, fre7=0, fre8=0, fre9=0;
    char s[10000];
    scanf("%[^\n]", s);
    
    for( int i = 0; i < strlen(s); i++ ){
        switch (s[i]) {
            case '0': fre0++; break;
            case '1': fre1++; break;
            case '2': fre2++; break;
            case '3': fre3++; break;
            case '4': fre4++; break;
            case '5': fre5++; break;
            case '6': fre6++; break;
            case '7': fre7++; break;
            case '8': fre8++; break;
            case '9': fre9++; break;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d", fre0, fre1, fre2, fre3, fre4, fre5, fre6, fre7, fre8, fre9);
     
    return 0;
}