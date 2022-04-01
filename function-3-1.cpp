#include <iostream> 
using namespace std;
int count_next_element_matches(int vals[], int vals_length){
    
    int num = 0;
    for(int i=1; i<vals_length; i++){   //function to comapre side element
        if(vals[i] == vals[i-1])
           ++num;
    }
    return num;
}

// #include <iostream>

// using namespace std;

// int main()
// {
//     int vals[]={1,2,2,2,3,1,1,5,2,2};  //our original array
//     int vals_length=10;  //length of array
    
//     int res = count_next_element_matches(vals,vals_length);
    
//     cout<<"Number of Matches: "<<res;
// }