# Task: 
Define a class Date that stores day, month and year in a dynamically allocated array of integers.
Supply constructor, copy constructor, destructor, assignment operator memory management class members. 
Use this class to demonstrate
	(a) the difference between initialization
		Date s;
		Date t = s;
		and assignment operation
		Date s;
		Date t;
		s = t;
	(b) the fact that all constructed objects are automatically destroyed
	(c) the fact that the copy constructor is invoked if an object is passed by value to a function
	(d) the fact that the copy constructor is not invoked when a parameter is passed by reference
	(e) the fact that the copy constructor is used to copy a return value to the caller.
Supply get and set member functions for day, month and year. Overload ++ and -- operators (prefix and postfix forms) to set a new date - a day later or before the argument (current) value, and the stream operators << and >>. Demonstrate all these functions and operators.
Detailed explanations: No
Specific requirements: 
