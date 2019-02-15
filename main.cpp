/** Vincent Nguyen
    October 10, 2018
    This program:
    1. Asks the user for their name.
    2. Welcomes the user.
    3. Asks the user to input a length of time in seconds.
    4. Outputs that number in hours, minutes, and seconds. */


#include <iostream>

using namespace std;

int main()
{
    string firstName;
    cout << "Please enter your name: ";
    cin >> firstName;

    cout << "Welcome to the program, " << firstName << '!' << endl;

    int totalSeconds;
    cout << "Enter a time in seconds: ";
    cin >> totalSeconds;

    int hours, minutes, seconds;
        /** The hours is calculated by dividing totalSeconds by 3600 */
    hours = totalSeconds / 3600;
        /** The minutes is calculated by dividing totalSeconds by 60 to
            convert it to minutes, then subtracting it by the product of
            60 and the variable hours to convert to minutes */
    minutes = totalSeconds / 60 - hours * 60;
        /** The seconds is calculated by subtracting totalSeconds by the
            seconds of the variables hours and minutes by dividing and
            multiplying the variables by 60, respectively, to convert them */
    seconds = totalSeconds - hours * 3600 - minutes * 60;

    cout << totalSeconds << " seconds is equivalent to " << hours << " hours, "
    << minutes << " minutes, and " << seconds << " seconds.";

    return 0;
}

/** sample run:
    Please enter your name: Vincent
    Welcome to the program, Vincent!
    Enter a time in seconds: 14529
    14529 seconds is equivalent to 4 hours, 2 minutes, and 9 seconds. */
