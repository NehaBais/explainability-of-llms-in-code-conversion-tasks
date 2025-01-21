The error occurred because Java does not have an `Arrays` object like in Rust. The fix is to use a different method to create ArrayLists.

Here's the correct version of the code:

```java
import java.util.ArrayList;
import java.util.Collections;

public class Main {
  public static void main(String[] args) {
    assert factor(100)
        .equals(new ArrayList<>(List.of(1, 2, 4, 5, 10, 10, 20, 25, 50, 100)));
    assert factor(101).equals(new ArrayList<>(List.of(1, 101)));
  }

  public static ArrayList<Integer> factor(int num) {
    ArrayList<Integer> factors = new ArrayList<>();

    for (int i = 1; i <= Math.sqrt(num); i++) {
      if (num % i == 0) {
        factors.add(i);
        factors.add(num / i);
      }
    }
    Collections.sort(factors);
    return factors;
  }
}
```
