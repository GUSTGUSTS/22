#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv){
 int a = argc-1;
 double x = 0;
 for(int i=1; i<=a;i++){
 x += atof(argv[i]);
 }
 x /= a;
 if(a == 0){cout << "Please input numbers to find average.";}else{
 cout << "---------------------------------\n";
 cout << "Average of " << a << " numbers = " << x;
 cout << "\n---------------------------------";}
}
