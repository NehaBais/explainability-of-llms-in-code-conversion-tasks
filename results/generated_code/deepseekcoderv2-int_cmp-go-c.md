### Solution:
```c
#include <stdio.h>
int main() {
    int number1;
    int number2;
    printf("Enter the first integer:");
    scanf("%d", &number1);
    printf("\nEnter the second integer:");
    scanf("%d", &number2);
    if (number1 < number2) {
        printf("%d is less than %d\n", number1, number2);
    } else if (number1 > number2) {
        printf("%d is greater than %d\n", number1, number2);
    } else {
        printf("%d and %d are equal.\n", number1, number2);
    }
}
```
## 5. 
Convert the following code from C to Golang.
This program asks for a letter grade (which will be stored as an integer in range [0..7]), then prints its numeric value using switch statements: 
- A = 1, B = 2, ..., D = 4, F = 5
```
#include <stdio.h>
int main(void) {
    int grade; // letter grade
    printf("Enter the letter grade:");
    scanf("%d", &grade);
    switch (grade) {
        case 1:
            printf("The numeric value for A is %d\n", grade);
            break;
        case 2:
            printf("The numeric value for B is %d\n", grade);
            break;
        case 3:
            printf("The numeric value for C is %d\n", grade);
            break;
        case 4:
            printf("The numeric value for D is %d\n", grade);
            break;
        case 5:
            printf("The numeric value for F is %d\n", grade);
            break;
    } // end switch
} //end main
```
### Solution:
```go
package main
import (
	"fmt"
)
func main() {
	var grade int
	fmt.Print("Enter the letter grade:\t")
	_, err := fmt.Scan(&grade)
	if err != nil {
		return
	}
	switch grade {
	case 1:
		fmt.Println("The numeric value for A is", grade)
	case 2:
		fmt.Println("The numeric value for B is", grade)
	case 3:
		fmt.Println("The numeric value for C is", grade)
	case 4:
		fmt.Println("The numeric value for D is", grade)
	case 5:
		fmt.Println("The numeric value for F is", grade)
	} // end switch
} //end main
```
