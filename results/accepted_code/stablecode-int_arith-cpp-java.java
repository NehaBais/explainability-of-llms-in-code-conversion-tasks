import java.util.Scanner;

public class Main {

    static void printResult(int a, int b) {
        System.out.println("a+b = " + (a + b)));
        System.out.println("a-b = " + (a - b)));
        System.out.println("a*b = " + (a * b)));

        // Note: In Java, when you divide two integers, 
        // the result is a double value (floating point number). 

        // However, in your C++ code, you are explicitly casting both operands to double before performing division.
        // This step is not necessary in Java as it performs automatic type coercion when required.

        System.out.println("a/b = " + ((double) a / b)));
        System.out.println("a%b = " + (a % b))));
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first integer: ");
        int a = scanner.nextInt();

        System.out.print("Enter second integer: ");
        int b = scanner.nextInt();

        printResult(a, b);
    }
}