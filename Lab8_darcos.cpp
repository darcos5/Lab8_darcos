/**
 * @file Lab8_darcos.cpp
 * @author Daisy Arcos
 * @date 2026-03-29
 * @brief Demonstrates stack vs heap memory and the use of pointers and references.
 */

#include<iostream>
using namespace std;

/**
 * @brief Entry point for the memory demonstration. Allocates memory on the stack and heap.
 * @return 0 to indicate success.
 */
int main()
{
    int stackInt = 10;
    int *heapInt = new int;
    *heapInt = 20;
    int *ptrToStack = &stackInt;
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