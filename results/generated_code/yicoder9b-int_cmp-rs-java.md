Here's the equivalent Java code for your requirement:

```java
import java.util.Scanner;

public class Main{
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    int num1,num2;
    System.out.println("Enter the first number:"); 
    num1=scanner.nextInt(); 
    System.out.println("Enter the second number:"); 
    num2=scanner.nextInt(); 

    if (num1 < num2) {
      System.out.println(num1+ " is less than " +num2);
    } else if (num1 == num2){
      System.out.println(num1+ " equals " +num2);
    } else { 
       if (num1 > num2) {  
        System.out.println(num1+ " is greater than " +num2);
       }
    }   
 }
}
```
This Java code will do exactly the same as your rust code, which prompts user to enter two integers and then display a message if first integer is less than, equal or greater than the second one.
