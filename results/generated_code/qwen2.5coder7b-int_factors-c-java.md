Here is the Java version of your C code. This program also computes factors of a positive integer.

```java
import java.util.ArrayList;
import java.util.List;

class Factors {
    List<Integer> list = new ArrayList<>();
}

public class Main {

    public static void xferFactors(Factors fctrs, List<Integer> flist) {
        for (int num : flist) {
            fctrs.list.add(num);
        }
    }

    public static Factors factor(int num, Factors fctrs) {
        int dvsr;
        fctrs.list.clear();

        for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
            if (num % dvsr != 0) continue;

            flist.clear();
            flist.add(dvsr);
            flist.add(num / dvsr);

            xferFactors(fctrs, flist);
        }

        if (dvsr * dvsr == num) fctrs.list.add(dvsr);

        return fctrs;
    }

    public static void main(String[] args) {
        int nums2factor[] = {2059, 223092870, 3135, 45};
        Factors ftors = new Factors();

        for (int i = 0; i < nums2factor.length; i++) {
            factor(nums2factor[i], ftors);
            System.out.println("factors of " + nums2factor[i] + " are: ");
            for (Integer num : ftors.list) {
                System.out.print(num + ", ");
            }
            System.out.println();
        }
    }

}
```

In the Java version, we use a `List<Integer>` instead of an array to store factors. The `xferFactors` method takes a `Factors` object and a `List<Integer>`, and adds all elements from the list to the factor's list.

The `factor` method calculates the factors and updates the provided Factors instance with those factors.

The `main` method is similar to the C version, it goes through each number in the `nums2factor` array, computes its factors using the `factor` method, and then prints out the computed factors.
