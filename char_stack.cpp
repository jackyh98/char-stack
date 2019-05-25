/* File: char_stack.cpp

  Implementation of functions for basic simple array-based implementation of a stack.

*/
#include "char_stack.h"// contains the declarations of the variables and functions.

char_stack::char_stack() {			// constructor that initializes top index as -1, and size as 0
	top_index = -1;
	s_size = 0;
}

void char_stack::push(char item) {	// takes a character in as parameter and pushes it onto stack
	
	top_index++;					// move top_index up by 1
	s[top_index] = item;			// place new char in the new top_index
	s_size++;						// increment size by 1
	
}

char char_stack::pop() {			// pops top character
	
	top_index--;					// moves top_index back 1
	s_size--;						// decrement size by 1
	return s[top_index + 1];		// returns the character that was popped
	
}

char char_stack::top() {			// returns the top character
	return s[top_index];
}

bool char_stack::empty() {			// returns if stack empty or not
	
  return top_index == -1 ; 

}

int char_stack::size() {			// returns the size of the stack
		return s_size;
}