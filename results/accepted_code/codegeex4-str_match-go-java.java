public class Main {

  public static void main(String[] args) {
    match("abracadabra", "abr");
  }

  public static void match(String first, String second) {
    System.out.println(
        "1. " + first + " starts with " + second + ": " + (first.startsWith(second)));
    int i = first.indexOf(second);
    if (i != -1) {
      System.out.println("2. " + first + " contains " + second + ": true");
      while (i != -1) {
        System.out.println("2.1. at location " + i);
        i = first.indexOf(second, i + 1);
        if (i != -1) System.out.println("2.2. at location " + i);
      }
      System.out.println("2.2. and that's all");
    } else {
      System.out.println("2. " + first + " contains " + second + ": false");
    }

    System.out.println("3. " + first + " ends with " + second + ": " + (first.endsWith(second)));
  }
}
