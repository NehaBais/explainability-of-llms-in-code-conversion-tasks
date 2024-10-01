public class Main {
  static String startsWith(String container, String target) {
    if (container.length() < target.length()) return "0";
    else return String.valueOf((container.substring(0, target.length())).equals(target));
  }

  static String endsWith(String container, String target) {
    if (container.length() < target.length()) return "0";
    else
      return String.valueOf(
          (container.substring(container.length() - target.length())).equals(target));
  }

  static String doesContain(String container, String target) {
    return (container.contains(target)) ? "1" : "0";
  }

  public static void main(String[] args) {
    System.out.println(startsWith("Hello", "Hell")); // prints 0
    System.out.println(endsWith("Code", "ode")); // prints 0
    System.out.println(doesContain("Google", "msn")); // prints 1
  }
}
