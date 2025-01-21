public class StringMatching {
  public static void match(String first, String second) {
    System.out.printf("1. %s starts with %s: %b\n", first, second, first.startsWith(second));

    int index = first.indexOf(second);
    boolean contains = index >= 0;
    System.out.printf("2. %s contains %s: %b,\n", first, second, contains);

    if (contains) {
      System.out.printf("2.1. at location %d,\n", index);
      for (int start = index + 1; ; ) {
        int nextIndex = first.indexOf(second, start);
        if (nextIndex < 0) {
          break;
        }
        System.out.printf("2.2. at location %d,\n", nextIndex);
        start = nextIndex + 1;
      }
      System.out.println("2.2. and that's all");
    }

    boolean endsWith = first.endsWith(second);
    System.out.printf("3. %s ends with %s: %b\n", first, second, endsWith);
  }

  public static void main(String[] args) {
    match("abracadabra", "abr");
  }
}
