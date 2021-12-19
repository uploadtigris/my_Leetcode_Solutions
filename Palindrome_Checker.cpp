
// not all original code!

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        //if neg or NAN
        if(x < 0)
            return false;

        //declare some vars
        long long y = 0, t = x;
        while (t != 0) {
            y = y * 10 + t % 10;
            t = (t/10);
        }
        return x == y;
    }
};
int main() {
    int x;
    std::cout << "Hello, Welcome to the solved palindrome checker." << std::endl;
    std::cout << "Please enter an integer" << std::endl;

    cin >> x;
    Solution called_func;

    if(called_func.isPalindrome(x))
    {
        cout << "is palindrome";
    }
    else
        cout << "not palindrome";

    return 0;
}


// WORK IN PROGRESS (below)
/*
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
        
       
