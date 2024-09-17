This is a simple Python program that computes the factors of a given positive integer. It uses the math library to import the isqrt function (which is an integer square root). The factor function iterates from 1 to the square root of n and checks if n is divisible by x; it adds both factors in factors1 and factors2 lists. If n is a perfect square, then only one factor is added at the end. After that, factors1 list is extended with reversed(factors2) list. Finally, it returns all factors from both lists.
Here's the Java equivalent:
```java
import java.util.*;
public class Factor {
    public static void main(String[] args){
        List<Integer> factors = new ArrayList<>();
        for (int i=0;i<=10;i++){
            System.out.println("Factors of "+i+" are:");
            factors.clear(); //To clear list before adding elements for every number.
            getFactors(i, factors);
            for(int num : factors){
                System.out.print(num + " ");
            }
            System.out.println("\n");
        }
    }
    public static void getFactors(int n, List<Integer> factors){
        int x = 1;
        while (x * x <= n) {
            if (n % x == 0) {
                // If so, a new factor has been found which is also the other one.
                if(n/x != x)
                    factors.add(n/x); //If it's not equal to x then add another factor.
                else
                    factors.add(x);
            }
            x++;
        }
    }
}
```
