public class Main {
    public static void main(String[] args) {
        System.out.println(
            "abcd".equals("abcd"), // true
            "abcd" == "abcd", // true
            Integer.valueOf(123).equals(Integer.valueOf("123")), // true
            123 != Integer.parseInt("123"), // false (using parseInt)
            !("ABCD".equals("abcd")), // true
            "abcd".compareTo("dcba") < 0, // true
            "abcd".compareTo("dcba") > 0, // false
            "ABCD".equalsIgnoreCase("abcd"), // true (case insensitive)
        );
    }
}