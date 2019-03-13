#include <iostream>

#ifdef _WIN32
#include <Windows.h> 
#else
#include <unistd.h>
#endif 

using namespace std;

void msleep(int milliseconds)
{
  #ifdef _WIN32
  Sleep(milliseconds);
  #else
  usleep(static_cast<useconds_t>(milliseconds)*1000); //or use nanosleep on platforms where it's needed
  #endif
}

#ifdef _WIN32
#define sysclear() system("cls")
#else
#define sysclear() system("clear")
#endif


void countDown(int n) {
    // base case
    if (n == 0) {
        sysclear();
        cout << "#$%#$25354W#$@^%34ADF5436%^#%&@#$#@%$&23$" << endl;
        cout << "Blast Off..." << endl;
    }
    // general case
    else {
        sysclear();
        cout << n << endl;
        msleep(1000);
        countDown(n-1);
        //....
    }
}

int main() {
    countDown(10);
    return 0;
}
