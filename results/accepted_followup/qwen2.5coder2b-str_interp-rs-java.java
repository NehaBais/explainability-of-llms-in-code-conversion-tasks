public class Main {
  public static void main(String[] args) {
    // Define variables or values
    String adjective = "little";

    // Print using variable and format method
    System.out.println("Mary had a %s lamb".formatted(adjective));
    System.out.printf("%s had a %s lamb%n", adjective, "Mary");
  }
}
