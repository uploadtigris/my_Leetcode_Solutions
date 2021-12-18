// WORK IN PROGRESS


#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        string arr;
        int size;
        int counter = 1;
        arr = to_string(x);
        size = arr.length();

        for(int i = 0; i < size; i++)
        {
            int checked = counter;
            if (arr[i] == arr[arr.length()-checked])
            {

            }
            else if (arr[i] != arr[arr.length()-checked])
            counter++;
        }
    };
};

int main() {
    int x;
    std::cout << "Welcome to the Palindrome Checker" << std::endl;
    cin >> x;

    // instance of Solution + called 'isPalindrome'
    Solution called_function;

    if(called_function.isPalindrome(x))
    {
        cout << "true";
    }
    else
        cout << "false";

    cout << endl;
    cout << x;

    return 0;
}

//Pseudo code for algorithim
    //initialize counter to 1

    //(for loop)
    //'checked' is initialized as counter value integer;
        //place inside for loop as to increment value.
    // compare the current array index value with the index array value of array[length-checked];
        // if equivalent, return true;
        // if not, retrun false;
