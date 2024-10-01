public class StringMatching {
  public static void main(String[] args) {
    String container = "Hello";
    String target = "Hell";

    // StartsWith Test
    int result1 = container.startsWith(target) ? 1 : 0;
    System.out.println("Starts with Test (" + container + "," + target + ") : " + result1);

    // Contains Test
    int result2 = container.contains(target) ? 1 : 0;
    System.out.println("Contains Test (" + container + "," + target + ") : " + result2);

    // EndsWith Test
    int result3 = container.endsWith(target) ? 1 : 0;
    System.out.println("Ends with Test (" + container + "," + target + ") : " + result3);
  }
}
