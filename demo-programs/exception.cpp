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
    int decimalNum;
    bool valid = false;;
    // User input with validation
    do
    {
        cout << "Enter a number in decimal: ";
        try
        {
            cin >> decimalNum;
            if (cin.fail())
            {
                throw "Invalid input. Tray again!";
            }
            valid = true;
        }
        catch (const char *error)
        {
            cin.clear(); // clear the cin failure state
            cin.ignore(100, '\n'); // ignore next 100 characters or up to \n char
            printf("%s\n", error);
        }
    } while (!valid);

    cout << "Thank you for entering a number: " << decimalNum << endl;
}

int main() {
    example1();
    example2();
    example3();
    return 0;
}