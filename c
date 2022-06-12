
# !!!!!

-> c program start with main function 

-> printf("hello\" world \n");
# to print string 

-> char name[] = "Vein";	
# to store string value in variable we have to use char array because no string data type is available in c

-> int age = 43;
# to store intiger value

-> printf("name is %s", name);	
# to place variable inside the string use %s for string variable %d for intiger variable %f for decimal number %c for character 

-> double gpa = 3.7;	
# to store decimal number

-> char grade = 'a';	
# to store character

-> pow(2,3);
-> sqrt(36);
-> ceil(36.325);
-> floor(36.820);	
# built-in math functions

-> /* comment */	
# comment in c

-> const int NUM = 5;	
# constant variables

-> scanf("%d", &age);	
# getting user input %lf for double value

-> scanf("%s%s", name, lastname);	
# to take string input no need of & but space terminate scanf statement

-> fgets(name, 20, stdin);		
# to take line of string but enter also get as input

-> int numbers[] = {2,3,4,4,1,3}	
# creating integer array

-> printf("%d", numbers[0]);		
# printing value at index 0

-> numbers[1] = 200			
# modifing element with index

-> -1 index? print array at index where no elemnt is assign?

-> function

int say_hi(char name[]);		
# protyping our function

void main()
	say_hi("mike");			
	# calling function

int say_hi(char name[]){
	printf("hello %s", name);
	return 0;
} 
# creating a function

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

-> switch

char grade = 'A';

switch(grade){
	case 'A':
		printf("fine");
		break;
	case 'B':
		printf("well");
		break;
	default:
		printf("bad");

-> is default also run when all condition true? which data can't be used in switch?

-> structs

struct Student{
	char name[20];
	int age;
};

struct Student Vein;

Vein.age = 22;
strcpy(Vein.name, "nickname")

printf("name of Vein is : %s", Vein.name);

-> while loop

int i = 1;
while(i<=5){
	printf("%d\n",i);
	i++;
}

-> do while

int i = 1;

do{
	printf("hello");
}while(i<=5);

-> for loop

int i;
for (i=1;i<=5;i++){
	print("hello");
}

-> 2D array

int nums[][] = {{1,2},{4,5}};

printf("%d",nums[1][0]);

-> nested loop

for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		print("%d", nums[i][j];
	}
}

-> printf("%p", &age);	# to print the address of age we use %p 

-> modifing value == modifing address?

-> int *pName = &name;

-> printf("%p", pAge);		# to print the address in pAge variable 

-> printf("%d", *pAge);		# to print the value at pointing address

-> printf("%d", *&age);		# to print the value at address

-> file I/O

writting...

FILE *fpointer = fopen("file.txt", 'w');
fprintf(fpointer, "ok write me");
fclose(fpointer);

appending...

FILE *fpointer = fopen("file.txt", 'a');
fprintf(fpointer, "append me");
fclose(fpointer);

reading...

char line[255];
FILE *fpointer = fopen("file.txt", 'r');
fgets(line, 255, fpointer);
printf("%s", line);
fclose(fpointer);
