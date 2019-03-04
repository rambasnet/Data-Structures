#include <iostream>
#include <string>
#include <vector>

using namespace std;

void example1() {
    unsigned long long int n;
    int *nums;
    cout << "Enter how many integers would you like to store? ";
    cin >> n;
    nums = new int[n];
    if (nums != NULL)
        cout << "successfully allocated memory to store " << n << " integers\n";
}

void example2() {
    vector<int> nums(10);
    try {
        nums.resize(1000000000000000000);
    }
    catch(const bad_alloc & e) {
        cout << "Exception occured: " << e.what() << endl;
    }
    cout << "size of nums = " << nums.size() << endl;
}

void example3() {
    int num1;
    bool success;
    while (true) {
        cout << "Enter a number: ";
        cin >> num1;
        success = true;
        if (cin.fail()) {
            success = false;
            throw "NAN"; // throw Not A Number string exception
        }
        catch (char * e) {
            cout << "Exception: not a number!" << e << endl;
            cin.clear(); // clear the error flag!
            cin.ignore(1000, '\n'); // ignore input stream 1000 chars or upto '\n' whichever comes first
        }
        if (success)
            break;
    }
    cout << "Thank you for entereing a number: " << num1 << endl;
}
int main() {
    example1();
    example2();
    return 0;
}