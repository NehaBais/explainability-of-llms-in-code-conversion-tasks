public class Main {
    public static void main(String[] args) {
        System.out.println("abcd".equals("abcd")); // true
        System.out.println("abcd".equalsIgnoreCase("abcd")); // true

        System.out.println("123".equals("123")); // true
        System.out.println("123".equalsIgnoreCase("123")); // false

        System.out.println("ABCD".equals("abcd")); // false
        System.out.println("ABCD".equalsIgnoreCase("abcd")); // false

        System.out.println("123" != "123"); // false
        System.out.println("123" != "123"); // true

        System.out.println("123" !== "123"); // true
        System.out.println("123" !== "123"); // false

        System.out.println("abcd".compareToIgnoreCase("dcba") == -1); // true
        System.out.println("abcd".compareToIgnoreCase("dcba") == 1); // false

        String str1 = "ABC";
        String str2 = "abc";

        System.out.println(str1.equalsIgnoreCase(str2)); // true (case insensitive)
    }
}