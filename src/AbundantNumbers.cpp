#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string abundantNum(){
    //For testing purposes. Please leave in the program
    string testResult;
    stringstream ss_input;
    stringstream ss_result;

    int numInput = 0;
    int numSum = 0;
    string result;

    cout << "Enter -1 to quit" << endl;
    cout << "Enter number to be tested: ";
    cin >> numInput;

    while (numInput != -1) {
        for (int iteratingNum = 1; iteratingNum != numInput; iteratingNum++)
            if (numInput % iteratingNum == 0) {
                numSum += iteratingNum;
                cout << iteratingNum << endl; //scaffolding
            }

        if (numSum > numInput) { result = "an abundant number."; }
        else if (numSum == numInput) { result = "a perfect number."; }
        else if (numSum == 1) {result = "a prime number! Wow!"; }
        else { result = "a deficient number."; }

        cout << numInput << " is " << result << endl;
        cout << "The sum of " << numInput << "'s factors is " << numSum << endl;
        //For testing purposes. Please leave in the program
        ss_input << numInput;
        ss_result << result;
        testResult += ss_input.str() + " is " + ss_result.str() + " ";
        ss_input.str(""); // Clear the stringstream after use
        ss_input.clear(); // Clear any error flags
        ss_result.str("");
        ss_result.clear();

        cout << "Enter -1 to quit" << endl;
        cout << "Enter number to be tested: ";
        cin >> numInput;
        numSum = 0;
    }
     
    return testResult;
}

#ifndef TESTING
int main(){
    abundantNum();
    return 0;
}
#endif
