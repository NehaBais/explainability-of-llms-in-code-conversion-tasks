The equivalent code in Java is as follows:

```java
import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    static ArrayList<Integer> generateFactors(int n) {
        ArrayList<Integer> factors = new ArrayList<>();
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                factors.add(i);
                if (i * i != n)
                    factors.add(n / i);
            }
        }
        return factors;
    }

    public static void main(String[] args) {
        int[] sampleNumbers = { 3135, 45, 60, 81 };
        for(int number: sampleNumbers){
            ArrayList<Integer> factors = generateFactors(number);
            System.out.println("Factors of " + number + " are: " + factors.toString());
        }
    }
}
```

Please note that while `ArrayList` is used here in the Java code as an example, you can replace it with any other collection from the Java standard library such as `Vector`, `LinkedList`, etc., depending on your specific requirements. The rest of the logic remains essentially the same: it's a loop to divide the number by all integers up to its square root and if there is a remainder then add that divisor to the list.
