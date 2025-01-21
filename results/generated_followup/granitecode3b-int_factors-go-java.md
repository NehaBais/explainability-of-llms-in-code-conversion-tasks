The error is caused by the fact that the `get` method of an ArrayList returns an Object, not a long. To fix this, we need to cast the Object returned by `get(i)` to a long using `(long) factors.get(i)`.

Here's the corrected code in a single fenced block:
```java
public static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("Factors of " + nr + " not computed");
      return;
    }
    System.out.printf("Factors of %d: ", nr);
    List factors = new ArrayList<>();
    factors.add(1L);
    for (int i = 0; i < factors.size(); i++) {
      long p = (long) factors.get(i); // cast Object to long
      int e = 0;
      while (nr % p == 0) {
        nr /= p;
        e++;
      }
      if (e > 0) {
        factors.add((long) Math.pow(p, e));
      }
    }
    for (long factor : factors) { // cast long to Object
      System.out.print(factor + " ");
    }
    System.out.println();
    System.out.println("Number of factors = " + factors.size());
  }
```

