// Palinadrome Number.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {  //checks if parameter is a palindrome
        std::string palTest = std::to_string(x); //sets palTest var equal to the conversion of int to string
        int palSize = palTest.size(); //declare int equal to string size to reduce amount of accesses

        for (int i = 0; i < palSize / 2; i++) { //for loop that runs for half the length of string
            if (palTest[i] != palTest[palSize - 1 - i]) { //compares number i spaces away from start to number i-1 spaces away from end
                return false; //returns false if not equal
            }
        }

        return true; //returns true if no false comparisons were caught
    }
};

void print(bool isPal) {
    std::cout << "Is it a palindrome? ";
    (isPal) ? std::cout << "Yes!" : std::cout << "No :<";

}


int main()
{
    Solution solver;


    //driver 1
    print(solver.isPalindrome(12321));
}


