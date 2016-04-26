//
//  main.cpp
//  CSIS_111_Lab_7
//
//  Created by Sedar  on 4/11/16.
//  Copyright (c) 2016 David D'Haiti. All rights reserved.
//

#include <iostream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int n;
    
    cout << "what will 'N' be??" << endl;           // Get
    cin >> n;
    cout << "'N' will be " << endl;
    for (int i = 0; i <= n ; i++) {
    
        if (n== 0 ) {
                cout << 0 << endl;
            }
        else if (n == 1){
                cout << 1 << endl;
                return 0;
            }
        else if (n > 1 ){
                n = (n-1) + (n-2);
                cout << n << endl;
            }
        }
    
    return 0;
}
/*
QUESTIONs
 
WHAT IS THE QUESTIONG:
   
 "-in mathematics, the Fibonacci number are the series of numbers that exhibit the following pattern
 
    0,1,1,2,3,5,8,21,34,55,89,144....
    
 in mathematical notation the sequence F^n of fibonacci numbers is defined by the flollowing recurrence relation:
 
    F^n = F^n-1 + F^n-2
 
 - with the initial values of F^0 and F^1=1.
   
 ***-Write program that asks the user for a positive integer N and generates the Nth Fibonacci number.***
    
 -your main should handle user input and pass that data to a function called Fib that takes an N as input and returns the Nth Fibonacci number"
 
CREATE AN WORD ALGORTHIM


 TEST FILE
        if(!ouput){
            output << "error there the file is not correct" << endl;
    }
GET "POSITIVE INTEGER N" FROM THE USER
GET NUMBER THAT N WILL NOT PASS
 - i can do it this way and then use a for loop or i can do it the way proffessor sipantzi talked about
GENERATE AND FIND N
 //     WAY 1
        used from the one given by proffessor
            If n == 0 then F(n) = 0
            If n == 1 then F(n) = 1
            If n > 1 then F(n) = F(n-1) + F(n-2)
        WAY 2
 int input(0), Alpha(0), Beta(1), Total(1);
 cout << "Please input a top number: ";
 cin >> input;
 // way 1
 // i like this way of using a for loop
 
    for(int i = 0; i <= input; i++){
        cout << Total << endl;
        Total = Alpha + Beta;
        Alpha = Beta;
        Beta = Total;

GET TO THE END OF N
        output << " this is your list of n


*/