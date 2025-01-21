public class Main {
  public static void main(String[] args) {
    String str = "Mary had a %s lamb";
    String txt = "big";
    String out = String.format(str, txt);
    System.out.println(out); // This should print "Mary had a big lamb"
  }
}
