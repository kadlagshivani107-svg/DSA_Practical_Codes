#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    ~complex(){}

void display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
}
complex operator+(complex c){
    return complex(real+c.real,imag+c.imag);
}
complex operator-(complex c){
    return complex(real-c.real,imag-c.imag);
}
complex operator*(complex c){
    float r=real*c.real-imag*c.imag;
    float i=real*c.imag+imag*c.imag;
    return complex(r,i);
}
};
int main(){
    complex c1(4,5),c2(2,3);

    cout<<"\nfirst complex no.is:";
    c1.display();
    cout<<"\nsecond complex no.is:";
    c2.display();

    complex sum=c1+c2;
    cout<<"\nsum:";
    sum.display();
     
    complex diff=c1-c2;
    cout<<"\ndifference:";
    diff.display();

    complex prod=c1*c2;
    cout<<"\nproduct:";
    prod.display();
    return 0;
}
/*PS D:\Shivani Kadlag> cd "d:\Shivani Kadlag\" ; if ($?) { g++ complex_arithmetic.cpp -o complex_arithmetic } ; if ($?) { .\complex_arithmetic }

first complex no.is:4+5i

second complex no.is:2+3i

sum:6+8i

difference:2+2i

product:-7+27i
PS D:\Shivani Kadlag> */
