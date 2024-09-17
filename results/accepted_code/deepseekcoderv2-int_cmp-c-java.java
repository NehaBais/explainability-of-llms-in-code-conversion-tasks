import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    if (a > b) System.out.println("greater than");
    else if (b == a) System.out.println("equal to");
    else System.out.println("less than");
  }
}
