import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class StringMatching {
  public static void main(String[] args) {

    // Function to check if string starts with given string
    boolean startsWith = startsWith("Hello", "Hell");
    System.out.println("Starts with Test ( Hello,Hell ) : " + startsWith);

    // Function to check if string ends with given string
    boolean endsWith = endsWith("Code", "ode");
    System.out.println("Ends with Test ( Code,ode ) : " + endsWith);

    // Function to check if string contains given string
    boolean doesContain = doesContain("Google", "msn");
    System.out.println("Contains Test ( Google,msn ) : " + doesContain);
  }

  // Check if the string starts with the specified string using Java regex
  private static boolean startsWith(String str1, String str2) {
    return str1.startsWith(str2);
  }

  // Check if the string ends with the specified string using Java regex
  private static boolean endsWith(String str1, String str2) {
    return str1.endsWith(str2);
  }

  // Check if the string contains the specified string using Java regex
  private static boolean doesContain(String str1, String str2) {
    Pattern pattern = Pattern.compile("^.*" + str2 + ".*$");
    Matcher matcher = pattern.matcher(str1);
    return matcher.find();
  }
}
