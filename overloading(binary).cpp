#include<iostream>

using namespace std;
class Complex{
    public:
    int a,b;
     void getdata(int x,int y)   {
         x=a;
         y=b;
     }                          
    void printdata(){                                  //call a function
        cout<<"the no is"<<a<<"+"<<b<<"i";             //perfrom under function
    }
    void display(Complex c1){
        Complex temp;
        temp.a=a+c1.a;
        temp.b=b+c1.b;
        return(temp);
    } 
};
                                
   
}
int main(){
    
 
 Complex c1,c2,c3;
 c1.getdata(45,56);
 c2.getdata
 c1.printdata();

return 0;
}