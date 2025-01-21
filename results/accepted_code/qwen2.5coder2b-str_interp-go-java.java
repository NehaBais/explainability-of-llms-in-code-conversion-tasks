public class Main {
  public static void main(String[] args) {
    String str = "Mary had a %s lamb";
    String txt = "little";
    System.out.println(String.format(str, txt));
  }
}
