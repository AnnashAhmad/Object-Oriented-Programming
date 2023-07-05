#include <iostream>
using namespace std;
int main()
{ 
int k,z,loc,min,n,a[k],ele,size,pos,list[k],temp;
cout<<"Enter your elements";
cin>>ele;

for (k=0;k<size;k++)
{  
        cout<<list[k]<<" ";  
    } 
    for(int k=0;k<size;k++)  
    {  
        pos = min (loc,k);  
        temp = loc[k];  
        list[k] = list[pos];  
        list[pos] = temp; 
        pass++;
    }  
    cout<<"\nSorted list is: ";  
    for(int i=0;i<10;i++)  
    {  
        cout<<list[i]<<" ";  
    } 
    cout<<"\nNumber of passes required to sort the array: "<<pass;
    return 0;  
} 
