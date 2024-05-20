#include <iostream>
#include <cmath>
using namespace std;
float f1=20;
float  Fun(float f2)
{
   return  pow(f2,3);
}
int main() 
{  int i=0, j=0;
  int k;
{float f1;
    f1=10; f1+=::f1;
    cout<<f1<<" "<<Fun(f1);
}
 /* i++; ++j;
  k=i+j;
  cout << "i="<<i<<", j="<< j<<", k="<< k<<endl;
  k=++i+j;
  cout << "i="<<i<<", j="<< j<<", k="<< k<<endl;
  k=i+(++j);
  cout << "i="<<i<<", j="<< j<<", k="<< k<<endl; 
  k=i+j++;
  cout << "i="<<i<<", j="<< j<<", k="<< k<<endl;*/
   return 0;
}
