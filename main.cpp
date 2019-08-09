//Raymond Heinzelman, August 9, 2019

#include <iostream>
#include <string>
using namespace std;

int main() {

    //Version 2

    string output;

    for(int i=1; i<=100; i++){

        if((i%3==0)&&(i%5==0)){output+="FizzBuzz\n"; continue;}
        if(i%3==0){output+="Fizz\n"; continue;}
        if(i%5==0){output+="Buzz\n"; continue;}
        if(!(i%3==0)&&!(i%5==0)){output+=to_string(i); output+="\n";}

    }

    cout << output;

    //Version 1

    /*for(int i=1; i<=100; i++){

        if((i%3==0)&&(i%5==0)){
            cout << "FizzBuzz" << endl;
        } else if(i%5==0){
            cout << "Buzz" << endl;
        } else if(i%3==0){
            cout << "Fizz" << endl;
        } else{
            cout << i << endl;
        }

    }*/

    return 0;
}