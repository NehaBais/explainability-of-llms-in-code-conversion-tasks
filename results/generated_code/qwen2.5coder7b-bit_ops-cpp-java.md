Here is the Java version of your C++ code:

```java
import java.util.*;

public class BitwiseOps {
    public static void bitwise(int a, int b) {
        System.out.println("a and b: " + (a & b));
        System.out.println("a or b:  " + (a | b));
        System.out.println("a xor b: " + (a ^ b));
        System.out.println("not a:   " + (~a));

        System.out.println("a shl b: " + (a << b));
        System.out.println("a shr b: " + (a >> b));
        System.out.println("a lsr b: " + (Math.floorMod(a, 1 << b)));

        int ua = a;
        for(int i = 0; i < b; ++i) {
            ua = (ua & 1) == 1 ? ua >> 1 | (1 << 31) : ua >> 1;
        }
        System.out.println("a rol b: " + ua);

        ua = a;
        for(int i = 0; i < b; ++i) {
            ua = (ua & 1) == 0 ? ua << 1 | 1 : ua << 1;
        }
        System.out.println("a ror b: " + ua);
    }

    public static void main(String[] args) {
        bitwise(5, 2); 
    }
}
```
This Java code performs the same operations as your C++ version. The `Math.floorMod` function is used for logical right shift (guaranteed). For rotation, left and right, loops are used to manually calculate these shifts/rotations.

Please note that the logic for left and right rotations in this Java version assumes a 32-bit integer since Java does not have unsigned integers. The bitwise operations may give different results depending on the number of bits in your system. For 64-bit systems, you would need to adjust `1 << b` in the code above to match your requirements.
