public class Main {
  public static void main(String[] args) {
    String s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    System.out.println(s.substring(n, n + m));

    // Print all characters starting at index 2 (c文字化けdef)
    System.out.println(s.substring(n));

    // Print all characters except the last (abc文字化けde)
    System.out.println(s.substring(0, s.length() - 1));

    // Print 3 characters starting with 'b' (bc文)
    int bPos = s.indexOf('b');
    if (bPos != -1) {
      System.out.println(s.substring(bPos, bPos + m));
    } else {
      System.out.println("Character not found");
    }

    // Print 3 characters starting with "けd" (けde)
    int kPos = s.indexOf("けd");
    if (kPos != -1) {
      System.out.println(s.substring(kPos, kPos + m));
    } else {
      System.out.println("Substring not found");
    }
  }
}
