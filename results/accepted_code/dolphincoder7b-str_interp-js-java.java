public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb";
    String little = "little";

    // replace 'X' with the value of little
    String replaced = String.format("%s had a %s lamb", original, little);

    System.out.println(replaced);
  }
}
