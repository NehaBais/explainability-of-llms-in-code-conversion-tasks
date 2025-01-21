
public class Main {
  public static void main(String[] args) {

    String s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    System.out.println(
        s.chars().skip(n).limit(m).mapToObj(c -> (char) c).collect(new StringJoiner("")));

    // Print all characters starting at index 2 (c文字化けdef)
    System.out.println(s.chars().skip(n).collect(new StringJoiner("")));

    // Print all characters except the last (abc文字化けde)
    int cpos = s.indexOf('b');
    if (cpos != -1) {
      System.out.println(new StringBuilder(s.substring(0, s.length() - 1)).reverse().toString());
    }

    // Print 3 characters starting with 'b' (bc文)
    int spos = s.indexOf("けd");
    if (spos != -1) {
      System.out.println(
          new StringBuilder(
              s.substring(spos)
                  .chars()
                  .limit(m)
                  .mapToObj(c -> (char) c)
                  .collect(new StringJoiner(""))));
    }
  }
}
