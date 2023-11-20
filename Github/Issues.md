Hello This is The first commit 
Questions :
1: Why header files of cpp doesn't ends with .hpp
like /#include <iostream>
and not /#include <iostream.hpp>


Problems :
1- entring tabulation in names (first name) not counted 4 spaces but just 2 character (when using getline)

2- when entring a character in the prompt for searching index and error accure when failing stoi to convert a character to integer
EX : -------3, 'O'...
Error : libc++abi.dylib: terminating with uncaught exception of type std::invalid_argument: stoi: no conversion

3: i used reference in cpp00/ex01 and i dont't know its uses i just follow the C perspective

TO : findlastof

## CPP01
# ex01 

In This exercice to know the difference between using object declared in the stack or in the heap and to see the difference ;

when we create an newZombie and name it , annonce it we need to return it here there is two option  :
    - we can return it as it '''return (newZombie)''' but in our exercice the function 
    shoudl return a pointer to the object so we shoudl print '''return (&newZombie)'''
    and this will accure an error because newZombie when declared it is stored in the stack as a local varible (object) and but when we return the pointer to this memory becomes a dangling pointer, pointing to an area of memory that is no longer allocated for the object, 
    - The other solution is to declare the object as a pointer without initilize it it will work but not a good behavior because it's is not safe because when we declare a pointer and not initialize it will point to a random memory address or garbage value and dereferncing  it (using *newZombie) will result in undefined behavior.

    Solution : So we need to use the allocation with the keyword '"new"' to provide that the object is located in the head and we have a pointer point to it that we can use it anywhere we pass it as an argument to access this region 

Conclusion : if the need to access an object a string by multiple functions we need to allocate it and pass its pointer to the functions that want to access it but if we have an object (variable) that its uses terminate at the end of the function we can use the stack to declare that object 

--> GPT Revision :
In this exercise, the distinction between stack and heap memory allocation and the implications of using pointers was evident. When attempting to return an object's address, relying solely on the object created on the stack resulted in a dangling pointer, pointing to deallocated memory after the function's scope ended.

Declaring an uninitialized pointer was not a recommended practice due to potential undefined behavior resulting from accessing invalid memory. It's crucial to understand the implications of stack-allocated objects and pointers pointing to them after their scope ends.

The use of new for dynamic allocation is critical, placing the object on the heap, ensuring its persistence beyond the function's scope. However, with this approach, it's essential to manage memory properly, deallocating it when no longer needed to prevent memory leaks.

The key takeaway is to assess the intended scope and duration of an object's existence. For objects requiring extended access across functions,  heap allocation using new and the use of pointers can provide the necessary flexibility.On the other hand, for short-lived objects limited to a specific function's scope, stack allocation suffices, avoiding potential issues related to dangling pointers.

Enhancing these aspects will provide a more comprehensive understanding of memory allocation, object scope, and the importance of proper memory management in C++.

## Virtual functions;
https://www.learncpp.com/cpp-tutorial/the-virtual-table/
https://stackoverflow.com/questions/2391679/why-do-we-need-virtual-functions-in-c


## Polymorphism : AD-HOD OR Parametric




## Floating point Numbers
The Simple case :
so we know that numbers used in our program are represented in binary (The language of the computer) and to know how it works ?
binary to decimal :

to convert 101.101 :

here is the reporesentation of binaries in a fraction way :
