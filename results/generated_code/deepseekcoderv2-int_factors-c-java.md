 Here's the equivalent Java code for the provided C code:

```java
import java.util.*;

class Factors {
    int[] list;
    int count;

    public Factors() {
        list = null;
        count = 0;
    }
}

public class FactorCalculator {
    static void xferFactors(Factors fctrs, int[] flist, int flix) {
        int newSize = fctrs.count + flix;
        if (newSize > flix) {
            fctrs.list = Arrays.copyOf(fctrs.list, newSize);
        } else {
            fctrs.list = new int[newSize];
        }
        System.arraycopy(flist, 0, fctrs.list, fctrs.count, flix);
        fctrs.count = newSize;
    }

    static Factors factor(int num) {
        int[] flist = new int[301];
        int flix = 0;
        Factors fctrs = new Factors();
        fctrs.list = null;
        fctrs.count = 0;

        for (int dvsr = 1; dvsr * dvsr < num; dvsr++) {
            if (num % dvsr != 0) continue;
            if (flix == 300) {
                xferFactors(fctrs, flist, flix);
                flix = 0;
            }
            flist[flix++] = dvsr;
            flist[flix++] = num / dvsr;
        }
        if (dvsr * dvsr == num) {
            flist[flix++] = dvsr;
        }
        if (flix > 0) {
            xferFactors(fctrs, flist, flix);
        }

        return fctrs;
    }

    public static void main(String[] args) {
        int[] nums2factor = {2059, 223092870, 3135, 45};
        char sep;

        for (int num : nums2factor) {
            Factors ftors = factor(num);
            System.out.print("Factors of " + num + " are: ");
            sep = ' ';
            for (int j = 0; j < ftors.count; j++) {
                System.out.print(sep + ftors.list[j]);
                sep = ',';
            }
            System.out.println();
        }
    }
}
```

### Explanation:
1. **Factors Class**: In Java, we use a class to represent the `Factors` structure. The constructor initializes the list and count fields.
2. **xferFactors Method**: This method is converted to adjust the size of the factors list and copy elements from an array to the list.
3. **factor Method**: This method computes the factors of a given number and returns a `Factors` object containing the factors.
4. **main Method**: The main method initializes an array of numbers, iterates over them, computes their factors using the `factor` method, and prints the results.

This Java code should provide similar functionality to the provided C code.
