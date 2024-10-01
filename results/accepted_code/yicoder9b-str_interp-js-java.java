public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb";
    String little = "little";
    String replaced = original.replace("X", little); // does not change the original string
    System.out.println(replaced);
  }
}
