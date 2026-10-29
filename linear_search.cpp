#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{ 
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        return(i);
    }
    return (-1);
}

int main()
{
int a[50];
int n;
cout<<"How many elements:";
cin>>n;
cout<<"Enter "<<n<<" elements:";
for(int i=0; i<n;i++)
{
    cin>>a[i];
}

int x;
cout<<"enter elements to search:";
cin>>x;
int location=linear_search(a,n,x);
if(location==-1)cout<<"elements not found";
else cout<<"elements found at index:"<<location;
return(0);
}
/*PS C:\Users\Student> cd "d:\Shivani Kadlag\" ; if ($?) { g++ linear_search.cpp -o linear_search } ; if ($?) { .\linear_search }
How many elements:5
Enter 5 elements:5 6 8 9 10
enter elements to search:8
elements found at index:2*/