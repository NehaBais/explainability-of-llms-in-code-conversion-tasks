public class Main {
  public static void main(String[] args) {
    String s1 = "hello";
    System.out.println(s1 + " world");

    String s2 = s1 + " world";
    System.out.println(s2);

    s1 = "hello";
    System.out.println(String.join(", ", s1, "world", "mom"));

    s2 = String.join(", ", s1, "world", "mom");
    System.out.println(s2);
  }
}
