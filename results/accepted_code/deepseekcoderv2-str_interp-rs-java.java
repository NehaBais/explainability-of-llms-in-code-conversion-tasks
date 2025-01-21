public class Main {
  public static void main(String[] args) {
    String name = "Mary";
    String adj = "little";

    // Using formatted strings for simple replacements
    System.out.printf("%s had a %s lamb\n", name, adj);

    // Specifying order
    System.out.printf("%s had a %s lamb\n", "Mary", "little");

    // Named arguments
    System.out.printf("%s had a %s lamb\n", name, adj);
  }
}
