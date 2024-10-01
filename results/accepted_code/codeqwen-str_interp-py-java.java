public class Main {
  public static void main(String[] args) {
    String extra = "little";
    String originalString = "Mary had a X lamb.";
    String new_str = new StringBuilder().append(originalString.replace("X", extra)).toString();
    System.out.println(new_str);
  }
}
