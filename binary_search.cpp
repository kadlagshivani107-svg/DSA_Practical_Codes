#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int first=0, last=n-1,mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if (a[mid]==x)
        return mid;
        else if (a[mid]<x)first=mid+1;
        else last=mid-1;
    }
    return(-1);
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
int location=binary_search(a,n,x);
if(location==-1)cout<<"elements not found";
else cout<<"elements found at index:"<<location;
return(0);
}
/*PS C:\Users\Student> cd "d:\Shivani Kadlag\" ; if ($?) { g++ binary_search.cpp -o binary_search } ; if ($?) { .\binary_search }
How many elements:5
Enter 5 elements:3 5 6 7 8
enter elements to search:7
elements found at index:3*/