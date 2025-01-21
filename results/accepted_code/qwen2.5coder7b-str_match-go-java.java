public class Main {

  public static void match(String first, String second) {
    System.out.println("1. " + first + " starts with " + second + ": " + first.startsWith(second));
    int index = first.indexOf(second);
    System.out.println("2. " + first + " contains " + second + ": " + (index >= 0));

    if (index >= 0) {
      System.out.println("2.1. at location " + index);

      while ((index = first.indexOf(second, index + 1)) != -1) {
        System.out.println("2.2. at location " + index);
      }
      System.out.println("2.2. and that's all");
    }

    System.out.println("3. " + first + " ends with " + second + ": " + first.endsWith(second));
  }

  public static void main(String[] args) {
    match("abracadabra", "abr");
  }
}
