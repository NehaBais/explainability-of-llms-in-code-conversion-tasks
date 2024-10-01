public class Main {
  public static void main(String[] args) {
    System.out.println("abcd" == "abcd"); // true
    System.out.println("abcd" === "abcd"); // true
    System.out.println(123 == "123"); // true
    System.out.println(123 === "123"); // false
    System.out.println("ABCD" == "abcd"); // false
    System.out.println("ABCD" != "abcd"); // true
    System.out.println(123 != "123"); // false
    System.out.println(123 !== "123"); // true
    System.out.println("abcd".compareTo("dcba") == 1); // true
    System.out.println("abcd".compareTo("dcba") > 0); // false
    System.out.println("ABCD".toLowerCase().equalsIgnoreCase("abcd")); // true (case insensitive)
  }
}