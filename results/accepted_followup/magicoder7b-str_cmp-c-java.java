public class Main {
    public static void main(String[] args) {
        compareStrings("ball", "bell");
        compareStrings("BALL", "BELL", true);
        compareStrings("YUP", "yep");
        compareStrings("YUP", "yep", true);
    }
    
    public static void compareStrings(String a, String b) {
        System.out.printf("%s %2d %2d %2d %2d %2d %2d %s%n", 
                         (caseSensitive ? "STREQ" : "STRCEQ") + "(a," + b + "), notEquals(a," + b + "), greaterThan(a," + b + "), lessThan(a," + b + "), greaterOrEqual(a," + b + "), lessOrEqual(a," + b + "),
                         b);
    }
    
    public static boolean equals(String a, String b) {
        return Objects.equals(a, b);
    }

    public static boolean notEquals(String a, String b) {
        return !equals(a, b);
    }

    public static boolean greaterThan(String a, String b) {
        return a.compareTo(b) > 0;
    }
    
    public static boolean lessThan(String a, String b) {
        return a.compareTo(b) < 0;
    }
    
    public static boolean greaterOrEqual(String a, String b) {
        return !lessThan(a, b);
    }
    
    public static boolean lessOrEqual(String a, String b) {
        return !greaterThan(a, b);
    }
}