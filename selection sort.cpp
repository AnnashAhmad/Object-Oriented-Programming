#include <iostream>  
using namespace std;  

int s (int[],int);  

int s (int list[],int i)  
{  
    int min,position,l;  
    min = list[i];  
    position = i;  
    for(l=i+1;l<10;l++)  
    {  
        if(list[l] < min)  
        {  
            min = list[l];  
            position=l;  
        }  
    }  
    return position;  
}

int main ()  
{  
    int list[10] = {19,14,2,60,52,91,27,37,201,29};  
    int pos,temp,pass=0;  
    cout<<"List of elements is: " <<endl;  
    for(int i=0;i<10;i++)  
    {  
        cout<<list[i]<<" ";  
    } 
    for(int i=0;i<10;i++)  
    {  
        pos = s (list,i);  
        temp = list[i];  
        list[i] = list[pos];  
        list[pos] = temp; 
        pass++;
    }  
    cout<<"\nSorted list is:" <<endl;  
    for(int i=0;i<10;i++)  
    {  
        cout<<list[i]<<" ";  
    } 
    cout<<"\nNumber of passes required to sort the array: "<<pass;
    return 0;  
}  
