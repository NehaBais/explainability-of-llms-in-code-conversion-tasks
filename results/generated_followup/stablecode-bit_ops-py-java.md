The error is caused by missing semicolons at the end of each System.out.println statement. 

To fix this issue, we need to add semicolons at the end of each System.out.println statement.

Here's the corrected Java code:

```java
public class BitwiseOperations 
{

    public static void main(String[] args) 
    {
        bitwiseBuiltIns(8, 27, 125);
        helperFuncs(8, 27);
    }

    private static void bitwiseBuiltIns(int width, int a, int b) 
    {
        int mask = (1 << width) - 1;
        System.out.println("Bitwise AND: " + Integer.toBinaryString(a & b) & mask));
        System.out.println("Bitwise OR: " + Integer.toBinaryString(a | b) & mask));
        System.out.println("Bitwise XOR: " + Integer.toBinaryString(a ^ b) & mask));
    }

    private static void helperFuncs(int width, int a) 
    {
        int top_bit_mask = 1 << (width - 1);
        int aa = a | top_bit_mask;
        System.out.println("Right Rotation: " + Integer.toBinaryString((a >> 1)) & ((1 << width) - 1))));
        System.out.println("Left Rotation: " + Integer.toBinaryString((a << 1) & ((1 << width) - 1)))));
    }


}
```
Now, the code should compile without any errors.
