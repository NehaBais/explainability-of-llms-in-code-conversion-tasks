*/
// JavaScript to Java
```
import java.util.*;  // needed for Scanner class
public class Math1 {
    public static void main(String[] args) {
        int a, b;
        System.out.println("Enter two numbers:");
        Scanner scan = new Scanner(System.in);
        a = scan.nextInt();
        b = scan.nextInt();
        
        //int sum, difference, product, division, remainder; 
        // We don't need these variables as they are already defined in the JavaScript version of this code above
        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        int division = a / b;
        double remainder = a % b;  // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator
        
        System.out.println("The sum of these two numbers is: " + sum);
        System.out.println("The difference of these two numbers is: " + difference);
        System.out.println("The product of these two numbers is: " + product);
        System.out.println("The division of the first number by the second number is: " + division);  // We can use a double value to display this result because we are dealing with an integer, but it's not a whole number (it has decimal places)
        System.out.println("When you divide these two numbers, your remainder is: " + remainder);
    }
}
```