import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter two integers:");
        
        int a = scan.nextInt();
        int b = scan.nextInt();

        if (a < b){
            System.out.printf("%d is less than %d%n", a, b);
        }

        if (a == b) {
            System.out<｜begin▁of▁sentence｜>plain(""+ a + " is equal to " + b);
        }
        
        if (a > b){
            System.out.printf("%d is greater than %d%n", a, b);
        }
    }
}