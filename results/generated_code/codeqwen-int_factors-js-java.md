Here is the equivalent Java code for your JavaScript function:

```java
import java.util.*;

public class Main {

    static List<Integer> factors(int num) {
        List<Integer> n_factors = new ArrayList<>();
        for (int i = 1; i <= Math.floor(Math.sqrt(num)); i += 1) {
            if (num % i == 0) {
                n_factors.add(i);
                if (num / i != i)
                    n_factors.add(num / i);
            }
        }
        Collections.sort(n_factors);  // numeric sort
        return n_factors;
    }

    public static void main(String[] args){
        System.out.println(factors(45)); // [1,3,5,9,15,45]
        System.out.println(factors(53)); // [1,53]
        System.out.println(factors(64)); // [1,2,4,8,16,32,64]
    }
}
```

In this Java code, I've used an ArrayList to store the factors of the number. The 'for' loop is similar to yours and iterates from 1 to sqrt(num) (inclusive). If a factor is found, it is added to the list. The second if condition checks for divisors other than 1 and num itself, which are also factors. After calculating all the factors, they are sorted in ascending order using Collections.sort().
