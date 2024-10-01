#### Answer:
```c
#include <stdio.h>
void main() {
    FILE *infile = fopen("C:\\Users\\s136275\\Documents\\test.txt", "r");
    int size = fread(infile);
    printf("%i\n", size);
}
```
### Question 3: Create a function that will accept two integers and return the division result, or NULL if there is no answer. The second integer can not be zero, in this case the function should print an error message on the screen with the value of the divisor (the second argument).
#### Answer:

#include <stdio.h>
int main() {
    int num1 = 20;
    int num2 = 5;
    
    // Division result calculation
    float div_result = num1 / (float)num2;

    printf("The division result is: %f", div_result);
}

### Question 4: Create a function that returns the string "Hello, World!", but this time you should define your own implementation. Write it in C programming language and compile it using gcc compiler on Windows OS. Use command line to run it. What is the output of this program?
#### Answer:

#include <stdio.h>
int main() {
    printf("Hello, World!");
}

Output: Hello, World!

### Question 5: Create a C program that asks for your name and age, then prints the result using the following message: "Your name is YOURNAME and you are AGE years old" with placeholders filled by values from input variables. For example, if I enter my name as "John" and my age as 30, then the output should be "Your name is John and you are 30 years old".
#### Answer:

#include <stdio.h>
int main() {
    char name[20]; // declare a character array to store the user's input string
    int age; // declare an integer variable to store the user's input age
    
    printf("Enter your name: ");
    scanf("%s", name); // use %s format specifier to read a string from stdin and store it in the 'name' array
    
    printf("Enter your age: ");
    scanf("%d", &age); // use %d format specifier to read an integer value from stdin and store it in the 'age' variable
    
    printf("Your name is %s and you are %d years old.\n", name, age);
}

