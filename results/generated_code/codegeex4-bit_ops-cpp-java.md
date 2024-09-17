```java
public class Main {
    public static void bitwise(int a, int b) {
        System.out.println("a and b: " + (a & b));
        System.out.println("a or b:  " + (a | b));
        System.out.println("a xor b: " + (a ^ b));
        System.out.println("not a:   " + (~a));

        // Note: the Java shift operators are not guaranteed to work if the shift count (that is, b)
        // is negative, or is greater or equal to the number of bits in the integer being shifted.
        System.out.println("a shl b: " + (a << b));
        System.out.println("a shr b: " + (a >> b)); 
        // typically arithmetic right shift, but not guaranteed
        int ua = a;
        System.out.println("a lsr b: " + ((ua & 0xFFFFFFFFL) >>> b));
        // logical right shift (guaranteed)

        // there are no rotation operators in Java, but as of Java we can use Bitset and rotate function.
        String binaryString = Integer.toBinaryString(ua);
        while(binaryString.length() < 32){
            binaryString = "0" + binaryString;
        }
        char[] binaryArray = binaryString.toCharArray();
        for(int i=0; i<b%binaryArray.length; i++){
            char firstChar = binaryArray[0];
            for (int j=0; j<binaryArray.length-1; j++) {
                binaryArray[j] = binaryArray[j+1];
            }
            binaryArray[binaryArray.length-1] = firstChar;
        }
        System.out.println("a rol b: " + Integer.parseInt(String.valueOf(binaryArray), 2));
        
        for(int i=0; i<(b%binaryArray.length); i++){
            char lastChar = binaryArray[binaryArray.length-1];
            for (int j=binaryArray.length-1; j>0; j--) {
                binaryArray[j] = binaryArray[j-1];
            }
            binaryArray[0] = lastChar;
        }
        System.out.println("a ror b: " + Integer.parseInt(String.valueOf(binaryArray), 2));
    }

    public static void main(String[] args) {
        bitwise(123, 4);
    }
}
```
