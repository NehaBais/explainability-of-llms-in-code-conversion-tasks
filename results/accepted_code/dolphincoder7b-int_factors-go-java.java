import java.util.*;
public class Factorization {
    public static void main(String[] args) {
        printFactors(-1);
        printFactors(0);
        printFactors(1);
        printFactors(2);
        printFactors(3);
        printFactors(53);
        printFactors(45);
        printFactors(64);
        printFactors(600851475143L); // Note: long data type is used to store large numbers 
        printFactors(999999999999999989L);
    }
    
    public static void printFactors(long nr) {
        if (nr < 1) {
            System.out.printf("
Factors of %d not computed\n", nr);
            return;
        }
        System.out.printf("
Factors of %d: ", nr);
        List<Long> factors = new ArrayList<>();
        factors.add(1L);
        for (long p = 2; ; ++p) {
            if ((nr/p)*p == nr) {
                long e = 0;
                while (nr%p == 0) {
                    ++e;
                    nr /= p;
                }
                addPowerFactors(factors, p, e);
            }
            if (nr <= 1) break;
        }
        System.out.println(factors);
        System.out.printf("Number of factors = %d\n", factors.size());
    }
    
    private static void addPowerFactors(List<Long> factors, long p, int e) {
        for (int i = 0; i <= e; ++i) {
            int pp = (int)Math.pow(p, i); // Note: int data type is used to store large powers 
            for (long f : factors) {
                factors.add((long)(f * pp));
            }
        }
    }
}