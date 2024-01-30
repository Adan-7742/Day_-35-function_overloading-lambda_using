//=======================================================================================================
//                                                                                                      =
//............................Function Overloading & lambda using ..... ................................=
//                                                                                                      =
//=======================================================================================================

#include <iostream>
using namespace std;

// the returninig values that are used in a function have different address
//  then the same value that store the returning result have different values


//'''''''''''''''''''''''''''''''''''''''''''''''''''
//             Function Overloading
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


// Overloading with different number of arguments:
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}


// example 2

//Overloading with different types of arguments

std::string concat(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

std::string concat(const std::string& str, int num) {
    std::string result = str;
    for (int i = 0; i < num; ++i) {
        result += str;
    }
    return result;
}


//============================================
//''''''''''''''''''''''''''''''''''''''''''''
//            Lambda Functions
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
//============================================

// used to set up ananonymous function that is without name
// hm une name de sakte hain then call ar sakte hain ya phir hm une direct b calll kr sate hain


// lambda function signature:
//                           [capture list ] (parameters) -> return type{
//                                   function body;
//                                } ;
// 
//          [] () {
//       cout<<" Function output or body";
// };
// Let's break down the components:

//Capture clause(optional) : This specifies which variables from the surrounding scope the lambda function can access.By default, it captures nothing([]).
//Parameter list(optional) : Similar to regular functions, you can define parameters for the lambda function.
//Return type(optional) : Specify the type of value the lambda function will return.If omitted, it returns void.
//Function body : This contains the actual code that the lambda function will execute.
// 
// 
// 
// //====================================================
// calling lambda function directly after defination
// 
//          [] () {
//       cout<<" Function output or body";
//    } ( )  ;


/*

Use Cases of Lambda Functions:

Filtering and sorting data
Performing calculations on iterables
Defining callback functions for event handlers
Creating custom comparison criteria

*/

 
// Lambda functions, also known as anonymous functions, allow you to define short,
//  one - line functions within your code in C++.They offer a concise and convenient way to handlesimple 
// tasks without needing a full - fledged function declaration.Here's a breakdown of declaring and using lambda functions:
int main()
{ 

    // Overloading with different number of arguments:
    std::cout << add(5, 3) << std::endl;   // Output: 8
    std::cout << add(2.5f, 1.7f) << std::endl;   // Output: 4.2


    // ...........................................

    cout << " Example 2......................................." << endl;
    std::cout << concat("Hello", "World") << std::endl;   // Output: HelloWorld
    std::cout << concat("Repeat", 3) << std::endl;   // Output: RepeatRepeatRepeat

    //'''''''''''''''''''''''''''''''''
    // simple calculation using lambda
    //,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

    auto multiplier = [](int x, int y) { return x * y; }; // Define a lambda for multiplication

    int product = multiplier(5, 3); // Use the lambda to calculate product

    std::cout << "Product: " << product << std::endl; // Output: Product: 15

    // chk conditions

    auto isEven = [](int x) { return x % 2 == 0; };

    bool isFiveEven = isEven(5); // isFiveEven will be false
    
    // example

    auto fun1 = [](double a, double b) {

        return a + b;
        };
    auto result1 = fun1(2.2, 4.0);

    cout << "Result : " << result1 << endl;

}

