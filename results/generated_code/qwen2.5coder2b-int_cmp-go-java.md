Here is the equivalent Java code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter number: ");
        int n1 = scanner.nextInt();
        
        System.out.print("Enter another number: ");
        int n2 = scanner.nextInt();

        if(n1 < n2){
            System.out.println(n1 + " is less than " + n2);
        }
        else if(n1 == n2){
            System.out.println(n1 + " is equal to " + n2);
        }
        else{
            System.out.println(n1 + " is greater than " + n2);
        }

        scanner.close();
    }
}
```

In the Java version, I used `Scanner` class to get input from user. Note that the format specifier `nextInt()` should be used in Java for `int` variables. The switch case in Java behaves differently than Golang's, because a single variable can be matched against multiple cases.
