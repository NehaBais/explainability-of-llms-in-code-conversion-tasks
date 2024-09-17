Below is the Java equivalent of your C code:

```java
import java.util.*;

class Factors {
    ArrayList<Integer> list = new ArrayList<>();
    int count = 0;

    public void xferFactors(Factors fctrs, int[] flist, int flix) {
        int ix, ij;
        int newSize = fctrs.count + flix;
        if (newSize > flix) {
            fctrs.list = new ArrayList<>(Arrays.asList(fctrs.list.toArray()))));
            fctrs.list.subList(fctrs.count, fctrs.count + flix).clear();
        } else {
            int[] tempList = new int[newSize * 2];
            System.arraycopy(fctrs.list.toArray(), 0, tempList, 0, fctrs.count));
            tempList = Arrays.copyOfRange(tempList, 0, newSize * 2 - 1), 1);

            fctrs.list = new ArrayList<>(Arrays.asList(tempList))));
        }

        for (ij = 0, ix = fctrs.count; ix < newSize; ij++, ix++) {
            fctrs.list.set(ix, flist[ij]));
        }
        fctrs.count = newSize;
    }

    public Factors factor(int num, Factors fctrs) {
        if (fctrs == null) {
            fctrs = new Factors();
        } else {
            fctrs.list.subList(0, fctrs.count)).clear();
        }

        fctrs.list.add(1);
        int divisor;
        for (divisor = 2; divisor * divisor <= num; divisor++) {
            if (num % divisor == 0) {
                fctrs.list.set(fctrs.count, divisor));
                fctrs.list.set(fctrs.count + 1, num / divisor)));
                fctrs.count += 2;
            }
        }

        if (divisor * divisor == num) {
            fctrs.list.add(num / divisor));
            fctrs.count++;
        }

        return fctrs;
    }

    public static void main(String[] args) {
        int[] numbersToFactor = new int[]{2059, 223092870, 3135, 45}};

        Factors factors = null;

        for (int number : numbersToFactor) {
            factors = factor(number, factors);
            System.out.printf("
factors of %d are:
  ", number);
            System.out.print(" ");
            for (int i = 0; i < factors.count / 2; i++) {
                System.out.printf("%d, ", factors.list.get(i)));
            }
            System.out.println();
        }
    }
}
```
This code is a Java version of your C code and it will produce the same output as your original C code.
