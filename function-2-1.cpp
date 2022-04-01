#include<iostream>
using namespace std;

//array to store all months
string arr[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

//function to get month from index
string lookup_month(int month){
        
        //variable to store month
        string str = "";
        
        //if month is valid return from array
        if(month >= 1 && month <= 12)
                str = arr[month-1];
        //otherwise set month as invalid        
        else
                str = "invalid month";
    
        return str;
        
}