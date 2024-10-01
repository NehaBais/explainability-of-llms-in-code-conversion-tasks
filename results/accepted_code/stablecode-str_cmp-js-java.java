public class StringComparisonDemo {
    public static void main(String[] args) {

        System.out.println("abcd" == "abcd")); // true
        System.out.println("abcd" === "abcd")); // false (Java is strictly typed)
        System.out.println(123 == "123")); // true
        System.out.println(123 === "123")); // false (Java is not strictly typed)
        System.out.println("ABCD".toLowerCase()) == ("abcd".toLowerCase())); // true (case insensitive comparison)
    }
}