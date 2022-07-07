#include<iostream>
 using namespace std;
 class space{
     int x,y,z;
     public:
     void getdata(int p,int q,int r){
         x=p;
         y=q;;
         z=r;

     }
     void prindata(){
         cout<<"the values are -- >"<<x<<" "<<y<<" "<<z<<endl;
     }
    // void operator-(){   

    //                         //    this operator helps to negatiate the objects and reverse their sign
    //      x=-x;
    //      y=-y;
    //      z=-z;
    //  }

 };
 int main(){
     space s1;
     s1.getdata(23,-21,56);
     s1.prindata();
     -s1;
     s1.prindata();

     
    //         //    activates the operator function
    //  s1.prindata();
    //  return 0;
 }

