public class Main {
  public static void main(String[] args) {
    String s1 = "hello";
    System.out.println(s1 + " world");

    String s2 = s1 + " world";
    System.out.println(s2);

    s1 = "hello";
    System.out.println(", ".concat(s1).concat("world").concat("mom"));

    s2 = ", ".concat(s1).concat("world").concat("mom");
    System.out.println(s2);
  }
}
