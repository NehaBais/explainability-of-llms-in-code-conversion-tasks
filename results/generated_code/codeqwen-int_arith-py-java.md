Here is the equivalent Java code for your Python script:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first integer:");
        int input1 = sc.nextInt();
        System.out.println("Enter second integer:");
        int input2 = sc.nextInt();

        int qq = input1 + input2;
        System.out.println("Sum: 		  " + qq);

        int ww = input1 - input2;
        System.out.println("Difference: 	  " + ww);

        int ee = input1 * input2;
        System.out.println("Product: 	  " + ee);

        float rr = (float)input1 / (float)input2;
        System.out.println("Integer quotient: " + (int)(rr));
        System.out.println("Float quotient: " + rr);

        float tt = (float)input1 / (float)input2;
        int uu = (int)((tt - (int)tt) * 10);
        System.out.println("Whole Remainder:  " + (int)(uu/10));
        System.out.println("Actual Remainder: " + uu);

        float yy = (float)input1;
        for(int i = 0; i < input2 - 1; i++){
            yy *= input1;
        }
        System.out.println("Exponentiation: " + yy);
    }
}
```

In the Java code, we use `Scanner` class to read integer inputs from user. We convert float and int values into integer as per requirement for quotient/remainder. The exponentiation operation is done using a loop as in python.
