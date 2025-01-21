public class SubstringExample {
  public static void main(String[] args) {
    String s = "0123456789";

    int n = 3;
    int m = 4;
    char c = '2';
    String sub = "456";

    System.out.println(s.substring(n, Math.min(n + m, s.length())));
    System.out.println(s.substring(n));
    System.out.println(s.substring(0, s.length() - 1));
    int startIndex = s.indexOf(String.valueOf(c));
    if (startIndex != -1) {
      System.out.println(s.substring(startIndex, Math.min(startIndex + m, s.length())));
    } else {
      System.out.println("Character not found");
    }
    int subStartIndex = s.indexOf(sub);
    if (subStartIndex != -1) {
      System.out.println(s.substring(subStartIndex, Math.min(subStartIndex + m, s.length())));
    } else {
      System.out.println("Substring not found");
    }
  }
}
