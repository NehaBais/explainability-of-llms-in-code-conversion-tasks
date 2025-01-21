The error message is indicating that there are several syntax errors within the Java code. These errors occur because of incorrect escaping characters or missing semi-colons. 

To fix these issues, we need to ensure that all quotes and backslashes in the string literals are properly escaped using either single or double quotes: `\"` instead of `\"` and `\\` instead of `\\\\`. This ensures that the Java compiler can correctly interpret the text and perform syntax checks. Additionally, we need to add semi-colons after each statement within the `System.out.printf()` statements to ensure that they are valid Java code.

Here's the corrected code:
```java
import java.util.*;
public class Factorization  {
    public static void main(String[] args)  {
        printFactors(-1);
        printFactors(0);
        printFactors(1);
        printFactors(2);
        printFactors(3);
        printFactors(53);
        printFactors(45);
        printFactors(64);
        printFactors(600851475143L);  // Note: long data type is used to store large numbers 
        printFactors(999999999999999989L);
     }
    
    public static void printFactors(long nr) {
        if (nr  < 1)  {
            System.out.printf("
Factors of %d not computed\n", nr);
            return;
         }
        System.out.printf("
Factors of %d:  ", nr);
        List<Long> factors  = new ArrayList<>();
        factors.add(1L);
        for  (long p  = 2;  ;  ++p)  {
            if  ((nr/p)*p  == nr)  {
                long e  = 0;
                while (nr%p  == 0)  {
                    nr /= p;
                    e++;
                 }
                addPowerFactors(factors, p, e);
             }
             if (nr <= 1) break;
         }
        for (long f : factors) System.out.print(f + " ");
        System.out.println();
        System.out.printf("Total factors: %d\n", factors.size());
     }
    
    private static void addPowerFactors(List<Long> factors, long p, long e)  {
        for (long i = 0; i <= e; ++i)  {
            for (long f : factors)  {
                factors.add((long)(f * Math.pow(p, i)));
             }
         }
     }
}
```
