public class Main {
  public static void main(String[] args) {
    String s = "hello".intern(); // Use intern() to ensure the string is stored in the pool
    System.out.println(s);

    String s1 = s + " world";
    System.out.println(s1);
  }
}
