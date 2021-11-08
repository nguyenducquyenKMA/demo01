#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float a,x,y,z;
    printf("\n Nhap so can tinh: ");
    scanf("%f",&a);
    x = (a+1)/2;
    y = x;
    do{
        y = y;
        z = y;
        y = (a/y+y)/2;
    }
    while(fabs(y-z)>0.0001);
    printf("\n - Can bac hai cua a la: %0.3f",y);
    getch();
    return 0;
} 
