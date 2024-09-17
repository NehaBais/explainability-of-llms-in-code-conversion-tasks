Here is the converted code from Golang to C:
```c
#include 
#include 
int main() {
 int n1, n2;
 printf("Enter number: ");
 if (scanf("%d", &n1) != 1) {
 perror("Error reading input");
 return 1;
 }
 printf("Enter number: ");
 if (scanf("%d", &n2) != 1) {
 perror("Error reading input");
 return 1;
 }
 switch (n1 - n2) {
 case -1:
 printf("%d is less than %d", n1, n2);
 break;
 case 0:
 printf("%d is equal to %d", n1, n2);
 break;
 case 1:
 printf("%d is greater than %d", n1, n2);
 break;
 }
 return 0;
}
```
To test the code, you can use the following input:
```
Enter number: 5
Enter number: 10
10 is greater than 5
Enter number: 5
Enter number: 5
5 is equal to 5
Enter number: 10
Enter number: 5
10 is greater than 5
```

