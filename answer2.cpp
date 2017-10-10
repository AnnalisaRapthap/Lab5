#include<iostream>
using namespace std;
int maximum(int arr[])
{
int j,max;
for(j=0;j<10;j++)
{
if(j==0)
max=arr[j];
else if(arr[j]>max)
max=arr[j];
else if(arr[j]<max)
max=max;
}
return max;
}
int minimum(int arr[])
{
int j,min;
for(j=0;j<10;j++)
{
if(j==0)
min=arr[j];
else if(arr[j]<min)
min=arr[j];
else if(arr[j]>min)
min=min;
}
return min;
}
int mean(int a[])
{
int i,s=0,m;
for(i=0;i<10;i++)
{
s=s+a[i];
}
m=s/10;
return m;
}
int median(int a[],int mean)
{
int i,j,temp,k,med;
for(i=0;i<=10;i++)
        {
                for(j=0;j<=9;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
        }



for(k=0;k<10;k++)
{
cout << a[k];
}
med=(a[mean-1]+a[mean])/2;
return med;
}

int main()
{
int arr[10];
int i,mi,ma,me,medi;
for(i=0;i<10;i++)
{
cout << "Enter the value" << endl;
cin >> arr[i];
}
mi=maximum(arr);
cout << "The maximum number ="<< mi << endl;
ma=minimum(arr);
cout << "The minimum number="<< ma << endl;
me=mean(arr);
cout << "The mean=" << me<< endl;
medi=median(arr,me);
cout << "The median=" << medi;
}
