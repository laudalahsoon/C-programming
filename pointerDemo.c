#include<stdio.h> //including standerd library

int main(){ // main function


int* ptr ; //declaring an integer pointer

int a = 5; // declaring a integer variable and assigning value

ptr = &a ; // assigning integer pointer "ptr" the address of integer variable a

printf("%p\n" ,ptr); // printing the actual address held by ptr pointer

printf("%d\n" , *ptr); // printing the content pointed to by the ptr pointer (in this case , an integer)



}
