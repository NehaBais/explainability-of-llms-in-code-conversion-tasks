 Here is the Java equivalent of your Python code. Note that division in java by default gives a double result, thus we need to cast one of them to an integer explicitly if we want an integer quotient:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int input1 = sc.nextInt();
        int input2 = sc.nextInt();

        int qq = input1 + input2;
        System.out.println("Sum: " + qq);

        int ww = input1 - input2;
        System.out.println("Difference: " + ww);

        int ee = input1 * input2;
        System.out.println("Product: " + ee);

        double rr = (double)input1 / input2;
        System.out.println("Integer quotient: " + Math.round(rr));
        
        int fr = (int)((double)input1 / input2);
        System.out.println("Float quotient: " + fr);

        double tt = ((double)input1 / input2);
        double uu = (int)tt - tt;
        //System.out.println(tt);
        System.out.println("Whole Remainder: " + Math.round(uu*-10));
        System.out.println("Actual Remainder: "+uu*-10);
        
        int yy = (int)Math.pow(input1, input2);
        System.out.println("Exponentiation: " + yy);
    }
}
```

Please note that the `**` operator is not used in Java like it is in Python. We have to use Math.pow() function for this. The rest of the code is just a direct translation, where input1 and input2 are replaced by the user's inputs.
