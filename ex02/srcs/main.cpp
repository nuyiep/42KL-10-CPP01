/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:44:34 by plau              #+#    #+#             */
/*   Updated: 2023/06/01 11:25:08 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "--------Memory addresses:" << std::endl;
	std::cout << "Memory address of str =		   " << &str << std::endl;
	std::cout << "Memory address held by stringPTR=  " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF=  " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "--------Values:" << std::endl;
	std::cout << "Value of str =		       " << str << std::endl;
	std::cout << "Value pointed to by stringPTR= " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF= " << stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "They should all have the same output" << std::endl;
	return (0);
}

/* Pointers v references */
/**

Reassignment
	-	Pointers can be reassigned to point to different memory locations throughout 
		their lifetime. You can modify the value of a pointer to make it point to a 
		different object. 
	-	References, however, cannot be reassigned to refer to a 
		different object after initialization. 
		Once a reference is bound to an object, it remains bound to that object for 
		its entire lifetime.

Nullability
	-	Pointers can be assigned a special value called "null," which means they 
		don't point to any valid memory location. 
	-	References, on the other hand, must always be initialized and cannot be null. 
		Once a reference is assigned to an object, it cannot be changed to refer 
		to another object.

Initialization
	-	Pointers can be declared without initialization, and their value remains 
		uninitialized until explicitly assigned. 
	-	References must be initialized at the point of declaration and cannot be 
		left uninitialized.

Memory operations
	-	Pointers allow direct manipulation of memory by accessing the memory address 
		they store. 
		You can perform arithmetic operations on pointers (e.g., increment, decrement) 
		and access the data they point to using the dereference operator (*). 
	-	References, on the other hand, abstract away the memory address and provide 
		a more convenient way to work with objects. 
		They are automatically dereferenced, so you can directly use the reference as 
		if it were the original object.

Syntax for accessing data
	-	To access the data pointed to by a pointer, you need to dereference it using 
		the asterisk (*) operator. 
	-	With references, you can directly use the reference 
		variable as if it were the original object, without the need for dereferencing.

Memory management
	-	Pointers require manual memory management. You can allocate and deallocate memory 
		dynamically using pointers (e.g., with new and delete operators in C++). 
	-	References, on the other hand, do not directly involve memory management. They 
		are typically used to refer to existing objects, not to allocate or deallocate memory.

Overall, pointers provide more flexibility and low-level control over memory operations, 
while references provide a simpler syntax and safety guarantees 
(e.g., preventing null references). 
The choice between pointers and references depends on the specific requirements of 
your program and the language you are using.

**/