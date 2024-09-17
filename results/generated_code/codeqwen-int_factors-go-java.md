Here is the Java version of your Golang code:

```java
import java.util.*;

public class Main {

    public static void main(String[] args) {
        printFactors(-1);
        printFactors(0);
        printFactors(1);
        printFactors(2);
        printFactors(3);
        printFactors(53);
        printFactors(45);
        printFactors(64);
        printFactors(600851475143L);
        printFactors(999999999999999989L);
    }

    public static void printFactors(long nr) {
        if (nr < 1) {
            System.out.println("\n Factors of " + nr + " not computed");
            return;
        }
        System.out.print("\n Factors of " + nr + ": ");
        List<Long> fs = new ArrayList<>();
        fs.add(1L);
        long apf = 2, e = 0;

        while (nr % 2 == 0) {
            e++;
            nr /= 2;
        }

        for (apf = 2; nr > 1; apf += 2) {
            if (apf * apf > nr) {
                apf = nr;
            }

            e = 0;

            while (nr % apf == 0) {
                e++;
                nr /= apf;
            }

            if (e > 0) {
                for (int i = 0; i < e; i++) {
                    long pp = apf;
                    for (int j = 0; j < fs.size(); j++) {
                        fs.add(fs.get(j) * pp);
                    }
                }
            }
        }

        System.out.println(fs);
        System.out.println("Number of factors = " + fs.size());
    }
}
```
