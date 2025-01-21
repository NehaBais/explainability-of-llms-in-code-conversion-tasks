public class Main {
  public static void main(String[] args) {
    String s = "hello";
    System.out.println(s);

    String s1 = new String(s);
    // Alternatively, you can use:
    // String s1  = s;

    String s2 = s + " world";
    System.out.println(s2);
  }
}
