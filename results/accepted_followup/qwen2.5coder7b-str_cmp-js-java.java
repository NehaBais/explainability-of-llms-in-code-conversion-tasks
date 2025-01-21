public class Main {
  public static void main(String[] args) {
    System.out.println("abcd".equals("abcd")); // true
    System.out.println("abcd" == "abcd"); // true
    System.out.println(Integer.valueOf(123).equals(Integer.valueOf("123"))); // true
    System.out.println(123 != Integer.parseInt("123")); // false (using parseInt)
    System.out.println(!("ABCD".equals("abcd"))); // true
    System.out.println("abcd".compareTo("dcba") < 0); // true
    System.out.println("abcd".compareTo("dcba") > 0); // false
    System.out.println("ABCD".equalsIgnoreCase("abcd")); // true (case insensitive)
  }
}
