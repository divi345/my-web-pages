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
    Complex operator+(Complex c1){
        Complex temp;
        temp.a=a+c1.a;
        temp.b=b+c1.b;
        return(temp);
    } 
};
                                

int main(){
    
 
Complex ob1,ob2,ob3;
ob1.getdata(2,4);
ob2.getdata(4,3);
ob3=ob1+ob2;
ob1.printdata();
ob2.printdata();
ob3.printdata();

return 0;
}