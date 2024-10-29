public class Main {
  public static void main(String[] args) {
    StringBuilder s = new StringBuilder("world!");
    s.insert(0, "Hello, ");
    System.out.println(s.toString()); // Output: Hello, world!
  }
}
