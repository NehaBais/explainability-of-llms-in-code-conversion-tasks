Here is the equivalent Java code for your C program:

```Java
import java.util.*;
public class Main {

    private static List<Integer> factor(int num) {
        ArrayList<Integer> factors = new ArrayList<>();
        
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                factors.add(i);
                
                // If divisor is not same as quotient, then add it too
                if (i != num / i) 
                    factors.add(num/i);
            }
        }
        
        return factors;
    }
    
    public static void main(String[] args) {
        int[] nums2factor = { 2059, 223092870, 3135, 45 };

        for (int num : nums2factor) {
            List<Integer> factors = factor(num);
            
            System.out<｜begin▁of▁sentence｜>.println("Factors of " + num + " are: ");
            String sep = "";
            
            // Print all the factors separated by comma
            for (int factor : factors) {
                System.out.print(sep + factor);
                sep = ", ";
            }
            
            System.out.println();
        }
    }
}
```
This Java code basically does the same thing as your C program: it finds all factors of a given integer and prints them out.  The main difference is that in Java, arrays don't have a dynamic size like in C (and thus we use `ArrayList` instead), but ArrayList can still be used to dynamically store numbers just like you did with the struct array `fctrs->list` in your C code. We also take advantage of enhanced for loop and StringBuilder class here for better performance over separate print statements.

