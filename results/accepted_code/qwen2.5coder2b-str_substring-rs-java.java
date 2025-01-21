import java.util.stream.Collectors;

public class Main {
  public static void main(String[] args) {

    String s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    System.out.println(
        s.chars().skip(n).limit(m).mapToObj(c -> (char) c).collect(Collectors.joining()));

    // Print all characters starting at index 2 (c文字化けdef)
    System.out.println(s.chars().skip(n).collect(Collectors.joining()));

    // Print all characters except the last (abc文字化けde)
    System.out.println(new StringBuilder(s.substring(0, s.length() - 1)).reverse().toString());

    // Print 3 characters starting with 'b' (bc文)
    int cpos = s.indexOf('b');
    if (cpos != -1) {
      System.out.println(
          s.substring(cpos).chars().limit(m).mapToObj(c -> (char) c).collect(Collectors.joining()));
    }

    // Print 3 characters starting with "けd" (けde)
    int spos = s.indexOf("けd");
    if (spos != -1) {
      System.out.println(
          s.substring(spos).chars().limit(m).mapToObj(c -> (char) c).collect(Collectors.joining()));
    }
  }
}
