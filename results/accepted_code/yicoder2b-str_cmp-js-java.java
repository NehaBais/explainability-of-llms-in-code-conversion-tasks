public class Main {
  public static void main(String[] args) {
    System.out.println("abcd".equals("abcd") + " " + (!"abcd".equals("abcd"))); // true true
    System.out.println(Integer.parseInt("123") == "123"); // true, because "123" is parsed to int
    System.out.println(
        "ABCD".toLowerCase().equals("abcd".toLowerCase())); // true (case insensitive)
  }
}
