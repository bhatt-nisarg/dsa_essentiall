//Recursion Basics 
/* Introduction : Recursion is computer science is a technique wheere the solution to a problem depends on solutions to smaller instances of the same problem

example : we can define the operation "Go to home" as:
	Base case : 
		1. if you are at home, stop moving.
	Recursive case : 
		2. take one step toward home.
		3. "Go To Home".

pseudo code : 
	//A simple recursive function
	void goHom(x,home){
		if(x==home){
			print("Reached Home")
			return;
		}
		x = x+1
		goHome(x,home)
	}

	//main
	int x = 1;
	int home =10
	goHome(x,home)

	this is the code for given recursive example

Some steps for recursion!!!

Recursion = Principal of mathematical induction
1. Figure of the Smallest Case
2. Always Assume the Subproblem Can be Solved
3. Solve the current problem assuming subproblem solution exists	

