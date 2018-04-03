#include <iostream>

using std::cout;
using std::endl;

void suma2(int x);
void suma2_d(int * x);
int mayor(int x , int y);


int mayor(int x , int y){

  if( x > y){
    return x;
  }else{
    return y;
  }
}  

void suma2 (int x){
  x=x+2;
}

void suma2_d(int * x){
  cout<<"lo que entra:" << *x << endl;
  *x = *x + 2;
  cout<<"lo que sale:" << *x << endl;

}
int main(){
  int a;
  int b;
  int c;
  

  a= 1000;
  suma2_d(&a);
  b= 243;
  c = mayor(a,b);
  
  
  cout<<"el mayor es:" << c << endl;
  cout<<"salida:" << a << endl;

  return 0;
}



     
  

