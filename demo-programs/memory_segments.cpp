// Program that demonstrates various memory semgments
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int globalNum = 100; //Data segment
static double globalStaticNum = 100.1; //data segment
int globalNum1; //bss segment

void myFunction() //code segment
{
    int a = 10; //stack segment
    int nums[3] = {1, 2, 3}; //stack segment
    int *p = new int; // p is in stack but point to a address in heap segment
    cout << "\nLocal Variables in myFunction:" << endl;
    printf("\theap: value of pointer p= %u\n", p);
    printf("\tstack: address of a= %u\n", &a);
    printf("\tstack: base address of nums= %u\n", nums);
    printf("\tstack: address of pointer p= %u\n", &p);
}

int main() //code segment
{
  int a =100; //stack segment
  int *p = new int; // Heap segment
  printf("Code segment: \n \taddress of main= %u\n", &main);
  printf("\taddress of myFunction= %u\n", &myFunction);
  printf("Data segment: \n\taddress of globalNum= %u\n", &globalNum);
  printf("\taddress of globalStaticNum= %u\n", &globalStaticNum);
  printf("bss segment: \n\taddress of globalNum1= %d\n", &globalNum1);
  cout << "\nLocal variabiles in main:" << endl;
  printf("\theap: value of pointer p= %u\n", p);
  printf("\tstack: address of a= %u\n", &a);
  printf("\tstack: address of pointer p= %u\n", &p);
  myFunction();
  return 0;
}