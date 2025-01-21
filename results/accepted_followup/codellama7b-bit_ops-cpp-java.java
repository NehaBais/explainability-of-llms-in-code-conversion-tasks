import java.util.Scanner;

public class bitwise {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the value of a");
    int a = sc.nextInt();
    System.out.println("Enter the value of b");
    int b = sc.nextInt();
    bitwise(a, b);
  }

  public static void bitwise(int a, int b) {
    System.out.println("a and b: " + (a & b));
    System.out.println("a or b: " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a: " + ~a);
    int ua = a;
    System.out.println("a shl b: " + (ua << b));
    System.out.println("a shr b: " + (ua >> b));
    System.out.println("a lsr b: " + (ua >>> b)); // logical right shift
    System.out.println("a rol b: " + a << b);
    System.out.println("a ror b: " + a >> b);
  }
}
