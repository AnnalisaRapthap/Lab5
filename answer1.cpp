#include<iostream>
using namespace std;
int sumArray(int a[])
{
int s=0,h, i;
for(h=0;h<10;h++)
{
cout << "Enter the value" << endl;
cin >> a[h];
}
for (i=0;i<10;i++)
{
s=s+a[i];
}
return s;
}
int main()
{
int arr[10];
int sum=sumArray(arr);
cout << sum;
}
