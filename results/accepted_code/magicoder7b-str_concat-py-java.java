public class Main {
  public static void main(String[] args) {
    String s1 = "hello";
    System.out.println(s1 + " world");

    String s2 = s1 + " world";
    System.out.println(s2);

    s1 = "hello";
    String result = String.join(", ", new String[] {s1, "world", "mom"});
    System.out.println(result);
  }
}
