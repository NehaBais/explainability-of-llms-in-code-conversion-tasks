This is the Java equivalent of your Golang code:
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

    private static void printFactors(long nr) {
        if (nr < 1) {
            System.out.println("Factors of " + nr + " not computed");
            return;
        }
        System.out.printf("Factors of %d: ", nr);
        List<Long> fs = new ArrayList<>(Arrays.asList((long)1));
        fs.add((long)1);
        apf = (p, e) -> {
            int n = fs.size();
            for(int i=0;i<e;++i) {
                for(int j=0;j<n;++j) {
                    fs.add(fs.get(j)*p);
                }
            }
        };
        int e = 0;
        while ((nr & 1L) == 0) {
            e++;
            nr >>= 1;
        }
        apf.apply(2, e);
        long d = 3;
        while (nr > 1 && d * d <= nr) {
            if (nr % d != 0) {
                d += 2;
            } else {
                do {
                    nr /= d;
                } while(nr % d == 0);
                apf.apply(d, 1);
            }
        }
        if (nr > 1) {
            apf.apply(nr, 1);
        }
        System.out.println(fs);
        System.out.println("Number of factors = " + fs.size());
    }
    private static BiConsumer<Long,Integer> apf;
}
```
Please be aware that this code might not run perfectly as the logic behind your Golang code is different in Java. The Java version simply replicates the original logic in a simpler and more modern way.
