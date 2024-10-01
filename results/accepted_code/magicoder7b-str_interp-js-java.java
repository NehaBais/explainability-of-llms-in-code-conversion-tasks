public class Main {
  public static void main(String[] args) {
    String original = "Mary had a %s lamb."; // %s is placeholder for variable
    String little = "little";
    String replaced = String.format(original, little);

    System.out.println(replaced);
  }
}
