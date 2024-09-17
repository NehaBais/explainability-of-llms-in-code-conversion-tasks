import java.util.Scanner;

public class CompareIntegers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in));
        System.out.println("Enter first integer:");
        int a = scanner.nextInt();
        System.out.println("Enter second integer:");
        int b = scanner.nextInt();

        compare(a, b);
    }

    public static void compare(int a, int b) {
        if (a == b) {
            System.out.println(a + " equals " + b));
        } else if (a < b) {
            System.out.println(a + " is less than " + b));
        } else if (a > b) {
            System.out.println(a + " is greater than " + b));
        } else {
            System.out.println("Invalid comparison: '" + a + "' and '" + b + "' are not of the same type and cannot be compared.");
        }
    }
}