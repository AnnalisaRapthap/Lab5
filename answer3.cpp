#include<iostream>
using namespace std;
int maximum(int a[],int size,int start)
{
int i,max;
for(i=start;i<size;i++)
{
if(i==0)
max=a[i];
else if(a[i]>max)
max=a[i];
else if(a[i]<max)
max=max;
}
return max;
}
int minimum(int a[],int size, int start)
{
int i,min;
for(i=start;i<size;i++)
{
if(i==0)
min=a[i];
else if(a[i]<min)
min=a[i];
else if(a[i]>min)
min=min;
}
return min;
}
int main()
{
int n,ma,mi,i;
cout << "Enter the size of the array" << endl;
cin >> n;
int arr[n];
for(i=0;i<n;i++)
{
cout << "Enter the values" << endl;
cin >> arr[i];
}
ma=maximum(arr,n,0);
mi=minimum(arr,n,0);
cout << "The maximum number=" << ma << endl;
cout << "The minimum number=" << mi;
}
