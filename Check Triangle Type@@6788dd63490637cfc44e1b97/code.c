#include <stdio.h>
int main() {
  int a,b,c;
  if(a==b && b==c){
    printf("Equilateral");
  }
  else if((a==b && c!=a || c!=b) || (a==c && b!=a || b!=c) || (b==c && a!=b || a!=c)){
    printf("Isosceles");
  }
  else{
    printf("Scatene");
  }
    return 0;
}