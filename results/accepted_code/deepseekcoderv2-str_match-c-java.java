public class StringMatching {
  public static boolean startsWith(String container, String target) {
    if (container.length() < target.length()) {
      return false;
    }
    return container.startsWith(target);
  }

  public static boolean endsWith(String container, String target) {
    if (container.length() < target.length()) {
      return false;
    }
    return container.endsWith(target);
  }

  public static boolean doesContain(String container, String target) {
    return container.contains(target);
  }

  public static void main(String[] args) {
    System.out.println("Starts with Test ( Hello,Hell ) : " + startsWith("Hello", "Hell"));
    System.out.println("Ends with Test ( Code,ode ) : " + endsWith("Code", "ode"));
    System.out.println("Contains Test ( Google,msn ) : " + doesContain("Google", "msn"));
  }
}
