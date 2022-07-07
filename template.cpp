// #include<iostream>
// using namespace std;
// template<typename t>
// t add(tx,ty){
// return(x+y);
// } 
// int main(){
//   cout<<"the addition is"<<add(3,4);
//   return 0;
// }

#include <iostream>  
using namespace std;  
template<class T> T add(T &a,T &b)  
{  
    T result = a+b;  
    return result;  
      
}  
int main()  
{  
  int i =2;  
  int j =3;  
  float m = 2.3;  
  float n = 1.2;  
  cout<<"Addition of i and j is :"<<add(i,j);  
  cout<<'\n';  
  cout<<"Addition of m and n is :"<<add(m,n);  
  return 0;  
}  