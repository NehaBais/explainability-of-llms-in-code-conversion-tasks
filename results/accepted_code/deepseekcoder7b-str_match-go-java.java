public class Main {
  public static void main(String[] args) {
    match("abracadabra", "abr");
  }

  public static void match(String first, String second) {
    System.out.println("1. " + first + " starts with " + second + ": " + first.startsWith(second));

    if (first.contains(second)) {
      System.out.println("2. " + first + " contains " + second + ": true");

      int index = 0;
      while ((index = first.indexOf(second, index)) != -1) {
        System.out.println("2.1. at location " + index);
        ++index;
      }
    } else {
      System.out.println("2. " + first + " contains " + second + ": false");
    }

    System.out.println("3. " + first + " ends with " + second + ": " + first.endsWith(second));
  }
}
