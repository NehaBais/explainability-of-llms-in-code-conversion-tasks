public class Main {
  public static void main(String[] args) {
    String s = new StringBuilder("World").insert(0, "Hello ").toString();
    System.out.println(s);
  }
}
