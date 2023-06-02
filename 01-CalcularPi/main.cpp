#include <iostream>
#include <math.h>
using namespace std;
int main(){
 
double PR=0,aux=0, i=0, pi=0, N=4, D=1;
int alt=1;

cout << "cant. de decimales de precision: "; cin >> PR;
i=pow(10,PR);

for (aux ; aux<i ; aux++);  {
 pi=pi+alt*(N/D);
   alt = alt*(-1);
   D=D+2;
}
cout.precision(7);
cout <<"pi: " << pi;

return 0;
}
