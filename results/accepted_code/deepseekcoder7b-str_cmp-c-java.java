public class Main {
  public static void main(String[] args) {
    // Comparing for exact equality and inequality
    System.out.println("ball".equals("bell")); // True if equals, False otherwise
    System.out.println("ball".equalsIgnoreCase("BELL")); // Case insensitive comparison

    // Lexical order comparisons
    System.out.println(
        "ball".compareTo("bell")
            < 0); // True if 'ball' lexically ordered before than 'bell', False otherwise
    System.out.println("ball".compareTo("BELL") < 0);

    // Comparing numeric strings
    System.out.println(
        "123".compareTo("456")
            < 0); // True if '123' lexically ordered before than '456', False otherwise
  }
}
