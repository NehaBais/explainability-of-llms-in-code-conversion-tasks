public class Main {
  public static void main(String[] args) {
    String container = "Hello";
    String target1 = "Hell";
    System.out.println("Starts with test (Hello,Hell): " + startsWith(container, target1));

    String target2 = "llo";
    System.out.println("Contains test (Hello,llo): " + doesContain(container, target2));

    String target3 = "lo";
    System.out.println("Ends with test (Hello,lo): " + endsWith(container, target3));
  }

  public static boolean startsWith(String container, String target) {
    return container.startsWith(target);
  }

  public static boolean doesContain(String container, String target) {
    return container.contains(target);
  }

  public static boolean endsWith(String container, String target) {
    return container.endsWith(target);
  }
}
