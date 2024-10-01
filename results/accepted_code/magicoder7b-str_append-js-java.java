public class Main {
  public static void main(String[] args) {
    String s1 = "Hello";
    StringBuilder sb = new StringBuilder(s1);
    sb.append(", World!");
    System.out.println(sb.toString());
  }
}
