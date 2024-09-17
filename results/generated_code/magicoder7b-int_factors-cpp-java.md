 Here is the equivalent Java code for your C++ program:

```java
import java.util.*;

public class Main {
    
    public static List<Integer> generateFactors(int n) {
        List<Integer> factors = new ArrayList<>();
        
        for (int i = 1; i <= Math.sqrt(n); ++i) {
            if (n % i == 0) {
                factors.add(i);
                
                if (i * i != n)
                    factors.add(n / i);
            }
        }
        
        Collections.sort(factors);
        return factors;
    }
    
    public static void main(String[] args) {
        int sampleNumbers[] = {3135, 45, 60, 81};

        for (int i = 0; i < sampleNumbers.length; ++i) {
            List<Integer> factors = generateFactors(sampleNumbers[i]);
            
            System.out.printf("Factors of %-4d are: ", sampleNumbers[i]);
            for (Integer factor : factors) {
                System.out.print(factor + " ");
            }
            System.out.println();
        }
    }
}
```
The Java code does the same thing as the C++ code. It generates a list of factors for an input number and then sorts that list in ascending order before printing it out. The `System.out.printf` function is used to align the numbers left by 4 spaces using "%-4d" as its format string. The "+ " after the loop is to add a space between each factor when printed. The `Collections.sort(factors);` line sorts the factors in ascending order before they are printed out.
