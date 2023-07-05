//insertion sort
#include<iostream>  
using namespace std;  
int main ()  
{ 
    int array[10] = { 12,4,3,1,15,7,13,21,10,2};   
       
    cout<<"The Input list is:"<<endl;
    for(int i=0;i<10;i++)  
    {  
        cout <<array[i]<<"\t"<<endl;  
    }    
    for(int k=1; k<10; k++)   
    {  
        int temp = array[k];  
        int j= k-1;  
        while(j>=0 && temp <= array[j])  
        {  
            array[j+1] = array[j];   
            j = j-1;  
        }  
        array[j+1] = temp;  
    }  
    cout<<"Sorted list is:"<<endl;
    for(int i=0; i<10; i++)  
    {  
        cout <<array[i]<<"\t";  
    }  
    return 0;
}
