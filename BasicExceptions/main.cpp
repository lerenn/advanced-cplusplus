#include <iostream>

using namespace std;

void mightGoWrong() {
    bool error1 = false;
    bool error2 = true;

    // Throw an integer
    // if (error1)
    //     throw 8;

    // Throw an const char 
    if (error1)
        throw "Something went wrong.";

    // Throw a string 
    if (error2)
        throw string("Something went wrong.");
}

void usesMightGoWrong() {
    mightGoWrong();
}

int main () {
    try {
        usesMightGoWrong();
    } catch (int e) {
        cout << "Error code: " << e << endl;
    } catch (char const * e) {
        cout << "Error message: " << e << endl;
    } catch (string &e) {
        cout << "String error message: " << e << endl;
    }

    cout << "Still running." << endl;

    return 0;
}