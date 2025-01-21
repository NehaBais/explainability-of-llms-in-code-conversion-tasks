public class Main {
  public static void main(String[] args) {
    String s = "hello";
    System.out.println(s + " literal");

    String s2 = s.concat(" literal");
    System.out.println(s2);

    // No need to free memory as Java handles it automatically with garbage collection.
  }
}
