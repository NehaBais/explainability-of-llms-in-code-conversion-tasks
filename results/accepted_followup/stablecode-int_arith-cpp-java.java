import java.util.Scanner;

public class Main {

    static void printResult(int a, int b) {
        System.out.println("a+b = " + (a + b)));
        System.out.println("a-b = " + (a - b))));
        System.out.println("a*b = " + (a * b))));
        System.out.println("a/b = " + ((double) a / b))));
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