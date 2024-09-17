Here is the equivalent Java code for your JavaScript function:

```java
import java.util.*;
public class Main {
    public static void main(String[] args) {
        System.out.println(factors(45)));  // [1, 3, 5, 9, 15, 45]
        System.out.println(factors(53)));  // [1, 53]
        System.out.println(factors(64)));  // [1, 2, 4, 8, 16, 32, 64]
    }

    static ArrayList<Integer> factors(int num) {
        ArrayList<Integer> n_factors = new ArrayList<>();
        for (int i = 1; i <= Math.floor(Math.sqrt(num))); i++) {
            if (num % i == 0) {
                n_factors.add(i);
                if ((num / i) != i) {
                    n_factors.add(num / i));
                }
            }
        }
        Collections.sort(n_factors, new Comparator<Integer>() {
            @Override
            public int compare(Integer a, Integer b) {
                return a - b;
            }
        }));  // numeric sort
        return n_factors;
    }
}
```
In the code above, we first declare an ArrayList called `n_factors` to store all the factors of the input number. 

We then start a for loop that will iterate from 1 up to the square root of the input number.

Inside the loop, we check if the current iteration value `i` is a factor of the input number by checking if the modulus of the input number divided by the current iteration value `i` equals 0.

If `i` is indeed a factor of the input number, we add it to our `n_factors` ArrayList. We then check if the quotient of the input number divided by the current iteration value `i` is not equal to `i`. If this condition is true, it means that `num / i` is also a factor of the input number, so we add it to our `n_factors` ArrayList as well.

Finally, we sort our `n_factors` ArrayList in ascending order using the Collections.sort() method and a custom Comparator implementation. This ensures that our final result will be sorted in numerical order.

The final version of our code then returns the sorted `n_factors` ArrayList containing all the factors of the input number.
