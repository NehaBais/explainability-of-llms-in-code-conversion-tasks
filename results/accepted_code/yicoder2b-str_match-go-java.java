public class Main {
  public static void main(String[] args) {
    match("abracadabra", "abr");
  }

  static void match(String first, String second) {
    System.out.println(first + " starts with " + second + ": " + (first.startsWith(second)));
    int index = first.indexOf(second);
    System.out.println(first + " contains " + second + ": " + (index >= 0));
    if (index >= 0) {
      for (int i = index + 1; ; ) {
        int nextIndex = first.indexOf(second, i);
        if (nextIndex < 0) break;
        System.out.println("Found " + second + " at location " + (i = nextIndex));
        i = nextIndex + 1;
      }
      System.out.println(second + " and that's all");
    }
    System.out.println(first + " ends with " + second + ": " + first.endsWith(second));
  }
}
