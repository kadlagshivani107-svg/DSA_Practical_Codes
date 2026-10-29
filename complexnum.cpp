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
    {real=r;
    imag=i;
}
~complex()
{
}
void display(void)
{
    cout<<real<<"+"<<imag<<"i"<<endl;    
}
complex add(complex c){
    return complex(real+c.real,imag+c.imag);
}
complex subtract(complex c){
    return complex(real-c.real,imag-c.imag);
}
complex multiply(complex c){
    float r=real*c.real-imag*c.imag;
    float i=real*c.imag+imag*c.real;
    return complex(r,i);
}
};
int main()
{
    complex c1(2.0,3.0);
    cout<<"complex no. is"<<endl;
    c1.display();
    complex c2(5.0,7.0);
    cout<<"complex no. is"<<endl;
    c2.display();
    complex c3(8.4,-6.7);
    cout<<"complex no. is"<<endl;
    c3.display();

    complex sum=c1.add(c2);
    cout<<"\nsum:";
    sum.display();

    complex diff=c1.subtract(c2);
    cout<<"\ndifference:";
    diff.display();

    complex prod=c1.multiply(c2);
    cout<<"\nproduct:";
    prod.display();

    return(0);
}
/*PS D:\Shivani Kadlag> cd "d:\Shivani Kadlag\" ; if ($?) { g++ complexnum.cpp -o complexnum } ; if ($?) { .\complexnum }
complex no. is
2+3i
complex no. is
5+7i
complex no. is
8.4+-6.7i

sum:7+10i

difference:-3+-4i

product:-11+29i
PS D:\Shivani Kadlag> */