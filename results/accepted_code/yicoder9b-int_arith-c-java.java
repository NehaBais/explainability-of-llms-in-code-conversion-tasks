public class Main {
  public static void main(String[] args) {
    if (args.length < 2) return;
    int b = Integer.parseInt(args[1]);
    if (b == 0) return;
    int a = Integer.parseInt(args[0]);
    System.out.println("a+b = " + (a + b));
    System.out.println("a-b = " + (a - b));
    System.out.println("a*b = " + (a * b));
    System.out.println("a/b = " + (a / b)); /* truncates towards 0 in Java */
    System.out.println("a%b = " + (a % b)); /* same sign as first operand in Java */
  }
}
