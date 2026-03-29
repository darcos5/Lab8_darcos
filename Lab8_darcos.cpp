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
    int stackInt = 1;
    //dynamically allocate an int variable on the heap using the new keyword 
    //and name the pointer varible heapInt
    int *heapInt = new int;
    *heapInt = 2;
    //create a pointer to the stack varibale named ptrToStack
    int *ptrToStack = &stackInt;
    //create a refrence to the stack variable named reftoStack
    int& refToStack = stackInt;






	return 0;
}