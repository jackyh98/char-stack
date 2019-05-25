/* File: char_stack.h       

  Header file for a very basic array-based implementation of a stack.

*/
class char_stack
{
  public:
    char_stack();			// constructor
    void push( char item );	// for pushing characters
    char pop(); 			// popping characters
	char top();				// return the top characters
    bool empty();			// checks if empty
    int size();				// returns the size

  private:
  
	char s[250000]; 			// initializes array for the stack with size 250000
    int s_size;				// size variable for the stack
	int top_index;			// variable that holds the top index
	
};