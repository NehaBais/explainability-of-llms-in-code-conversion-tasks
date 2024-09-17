In Java, the equivalent code would be:

```java
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    public static ArrayList<Integer> factors(int num) {
        ArrayList<Integer> n_factors = new ArrayList<>();
        for (int i = 1; i <= Math.floor(Math.sqrt(num)); i++) {
            if (num % i == 0) {
                n_factors.add(i);
                if (num / i != i)
                    n_factors.add(num / i);
            }
        }
        Collections.sort(n_factors); 
        return n_factors;
    }

    public static void main(String[] args) {
        System.out.println(factors(45));  // [1,3,5,9,15,45] 
        System.out.println(factors(53));  // [1,53] 
        System.out.println(factors(64));  // [1,2,4,8,16,32,64]
    }
}
```
In Java, we are using ArrayList instead of JavaScript arrays. Also, the Math.floor() function in JavaScript is replaced by calling the round method and subtracting .5 in Java as there is no direct equivalent for Math.floor(). We sort the array list using Collections.sort() function.
The main function is used to test our factors function.
