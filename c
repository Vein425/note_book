
# !!!!!

-> c program start with main function 

-> printf("hello\" world \n");	# to print string 

-> char name[] = "Vein";	
# to store string value in variable we have to use char array because no string data type is available in c

-> int age = 43;	# to store intiger value

-> printf("name is %s", name);	
# to place variable inside the string use %s for string variable %d for intiger variable %f for decimal number %c for character 

-> double gpa = 3.7;	# to store decimal number

-> char grade = 'a';	# to store character

-> pow(2,3);
-> sqrt(36);
-> ceil(36.325);
-> floor(36.820);	
# built-in math functions

-> /* comment */	# comment in c

-> const int NUM = 5;	# constant variables

-> scanf("%d", &age);	# getting user input %lf for double value

-> scanf("%s%s", name, lastname);	# to take string input no need of & but space terminate scanf statement

-> fgets(name, 20, stdin);		# to take line of string but enter also get as input

-> int numbers[] = {2,3,4,4,1,3}	# creating integer array

-> printf("%d", numbers[0]);		# printing value at index 0

-> numbers[1] = 200			# modifing element with index

-> -1 index? print array at index where no elemnt is assign?

-> function

int say_hi(char name[]);		# protyping our function

void main()
	say_hi("mike");			# calling function

int say_hi(char name[]){		# creating a function
	printf("hello %s", name);
	return 0;
} 

-> if statements

if (2>1 && 9>1 || 1>9){
	printf("yes");	
}
else if(!(2==2 && 2 != 4)){
	printf("hello");
}
else {
	printf("no");
}

