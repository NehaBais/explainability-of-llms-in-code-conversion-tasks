import java.util.*;

public class Main {

  public static void main(String[] args) {
    System.out.println("Starts with Test ( Hello,Hell )  : " + startsWith("Hello", "Hell"));
    System.out.println("Ends with Test  ( Code,ode )    : " + endsWith("Code", "ode"));
    System.out.println("Contains Test  ( Google,msn )   : " + doesContain("Google", "msn"));
  }

  public static boolean startsWith(String container, String target) {
    return container.startsWith(target);
  }

  public static boolean endsWith(String container, String target) {
    int index = container.lastIndexOf(target);
    if (index < 0) return false;
    return index == container.length() - target.length();
  }

  public static boolean doesContain(String container, String target) {
    return container.contains(target);
  }
}
