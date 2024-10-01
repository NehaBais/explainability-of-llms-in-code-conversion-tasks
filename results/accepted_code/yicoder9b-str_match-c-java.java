public class Main {

  static boolean startsWith(String container, String target) {
    if (container.length() < target.length()) return false;
    return container.substring(0, target.length()).equals(target);
  }

  static boolean endsWith(String container, String target) {
    if (container.length() < target.length()) return false;
    return container.substring(container.length() - target.length()).equals(target);
  }

  static boolean doesContain(String container, String target) {
    return container.contains(target);
  }

  public static void main(String[] args) {
    System.out.println("Starts with Test (Hello, Hell): " + startsWith("Hello", "Hell"));
    System.out.println("Ends with Test (Code, ode): " + endsWith("Code", "ode"));
    System.out.println("Contains Test (Google, msn): " + doesContain("Google", "msn"));
  }
}
