public class Main {
    public static void main(String[] args) {
        bitwise(5,3); //Test the function with a and b as 5 and 3 respectively.
    }
    static void bitwise(int a, int b) {
        //Performing bitwise AND on two integers 'a' and 'b'.
        System.out.println("a & b: " + (a & b));
        //Performing bitwise OR on two integers 'a' and 'b'.
        System.out.println("a | b: " + (a | b));
        //Performing bitwise XOR on two integers 'a' and 'b'.
        System.out.println("a ^ b: " + (a ^ b));
        //Performing NOT on integer 'a'.
        System.out.println("~a: " + ~a);
        //Performing left shift on integer 'a' with 'b' shifts to the left.
        System.out.println("a << b: " + (a << b)); 
        // Performing right shift on integer 'a' with 'b' shifts to the right.
        System.out.println("a >> b: " + (a >> b));
        // there are no rotation operators in Java, so we convert the signed integer into unsigned, 
        // perform a logical right shift on it with 'b' shifts to the right and print the result
        unsigned int c = a;
        System.out.println("c >> b: " + (c >>> b));
    }
}