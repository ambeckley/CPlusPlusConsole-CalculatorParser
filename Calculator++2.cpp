// Calculator++2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "calculator.h"
#include "CalculatorINT.h"
#include <stdint.h>
#include <iostream>
//#include <stdio.h>

int main()
{
    std::string choice = "y";
    //std::cout << "use old intepreter?";
    //std::cin >> choice;
    //std::string choice = "y";
    //choice == "y";
    if (choice == "y") {
        std::string x = "0";
        std::cout << "Calculator Console Application" << std::endl << std::endl;
        std::cout << "Enter any function" << std::endl;
        std::cout << "Prompt ";
        while (true)
        {
            try {
                std::cin >> x;
                if (x == "exit") { 
                    return 0;
                    exit;
                }
                else if (x == " ") { //trying to make prompt follow if enter key is pressed
                    std::cout << "Prompt: ";
                }
                else if (x.find('%') != std::string::npos) {
                    double result = CalculatorINT::eval(x);
                    std::cout << x << " = " << result << std::endl;
                    std::cout << "Prompt: ";
                }
                else if (x.find('&') != std::string::npos) {
                    double result = CalculatorINT::eval(x);
                    std::cout << x << " = " << result << std::endl;
                    std::cout << "Prompt: ";
                }
                else if (x.find('|') != std::string::npos) {
                    double result = CalculatorINT::eval(x);
                    std::cout << x << " = " << result << std::endl;
                    std::cout << "Prompt: ";
                }
                else if (x.find('^') != std::string::npos) {
                    double result = CalculatorINT::eval(x);
                    std::cout << x << " = " << result << std::endl;
                    std::cout << "Prompt: ";
                }
                else if (x.find('<<') != std::string::npos) {
                    double result = CalculatorINT::eval(x);
                    std::cout << x << " = " << result << std::endl;
                    std::cout << "Prompt: ";
                }
                else if (x.find('>>') != std::string::npos) {
                    double result = CalculatorINT::eval(x);
                    std::cout << x << " = " << result << std::endl;
                    std::cout << "Prompt: ";
                }
                else {
                    double result = calculator::eval(x);
                    std::cout << x << " = " << result << std::endl;
                    std::cout << "Prompt: ";
                }
            }
            catch (calculator::error& e)
            {
                std::cerr << e.what() << std::endl;
                std::cout << "Prompt: ";
            }

        }
        return 0;
    }
    else if (choice == "n") {
        std::cout << "blah";
    }
}
    /*
    try
    {
        int result = calculator::eval("(0 + ~(255 & 1000)*3) / -2");
        std::cout << result << std::endl;

        // 64-bit arithmetic
        int64_t r64 = calculator::eval<int64_t>("2**60");
        std::cout << r64 << std::endl;
    }
    catch (calculator::error& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
