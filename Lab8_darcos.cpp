/**
 * @file Lab8_darcos.cpp
 * @author Daisy Arcos
 * @date 2026-03-29
 * @brief Demonstrates stack vs heap memory and the use of pointers and references.
 */

 //creat a program that manipulates interger varaibles in different memory locations 
 //and access them through pointers and refrences 
#include<iostream>
using namespace std;

int main()
{
	// declare an int varibale on the stack named stackInt
    int stackInt = 10;
    //dynamically allocate an int variable on the heap using the new keyword 
    //and name the pointer varible heapInt
    int *heapInt = new int;
    *heapInt = 20;
    //create a pointer to the stack varibale named ptrToStack
    int *ptrToStack = &stackInt;
    //create a refrence to the stack variable named reftoStack
    int& refToStack = stackInt;

    //output directions
    //stack variable 
    cout << "Stack Variable (stackInt): " << endl;
    cout << "Value: " << stackInt << endl;
    cout << "Address: " << ptrToStack << endl;

    //heap variabale    -- double check 
    cout << "Heap Variable (heapInt): " << endl;
    cout << "Value: " << *heapInt << endl;
    cout << "Address: " << &heapInt << endl;

    //pointer to stack     -- double check 
    cout << "Pointer to Stack (ptrToStack): " << endl;
    cout << "Value Pointed To: " << stackInt << endl;
    cout << "Address: " << ptrToStack << endl;

    //refrence to stack-- double check 
    cout << "Reference to Stack (refToStack): " << endl;
    cout << "Value Referred To: " << refToStack << endl;
    cout << "Address: " << ptrToStack << endl;

    //clean up -- heap memory 
    delete heapInt; 
	return 0;
}