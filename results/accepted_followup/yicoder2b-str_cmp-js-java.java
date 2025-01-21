public class Main {
  public static void main(String[] args) {
    System.out.println(("abcd" == "abcd") + " " + (!"abcd".equals("abcd"))); // true true
    System.out.println(
        Integer.parseInt("123")
            == Integer.valueOf(
                "123")); // false, because "123" can be parsed into integer and `Integer.valueOf`
                         // compares the numerical values, not their references
    System.out.println(
        "ABCD".toLowerCase().equals("abcd".toLowerCase())); // true (case insensitive)
  }
}
