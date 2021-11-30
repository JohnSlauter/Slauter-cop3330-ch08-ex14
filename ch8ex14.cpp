/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 John Slauter
 */

#include "std_lib_facilities.h"
#include "ch8ex14.h"

using namespace ns;

int main(){

    /*

        The value of const variables cannot be changed; additionally, the value of const variables 
        must be specified on the same line that they are declared on.

        const int example; 
        example = 1; <- this does not work

        const int example = 1; <- this works

    */

    int number = 1;

    const int const_number = 3;

    string word = "example";

    cout << int_const_function(number) << endl;

    //If a parameter of a function is const, that parameter does not necessarily need to be const in its original function 

    number++;

    cout << int_const_function(number) << endl;

    cout << int_const_function(const_number) << endl;

    str_const_function(word);

    return 0;

}

int ns::int_const_function(const int number){

    //number++; <- not permitted; cannot modify the value of a constant

    int ret = number + 1;

    return ret;

}

void ns::str_const_function(const string word){

    string word2 = word;

    if(word == word2){

        cout << "const variables can be compared!" << endl;

    }

    word2 += word;

    if(word != word2){

        cout << "the values of const variables can be copied into other non-const variables, whose value can change" << endl;

        cout << word << " vs. " << word2 << endl;

    }

}