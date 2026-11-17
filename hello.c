#include<stdio.h>
int main(){
  float _c,_F;
    printf("Enter Celsius");
    scanf("%f",&_c);
    _F=(_c*9/5)+32;
    printf("Temparature: %f",_F);
    return 0;
}