public class StringComparisonDemo  {
    public static void main(String[] args)  {
        System.out.println(
            "abcd".equals("abcd") && // true (equal value and equal type)
            "abcd".equalsIgnoreCase("AbCd") &&   // true (case insensitive comparison)
            123 == Integer.parseInt("123") &&   // true (numeric conversion to integer)
            !"123".equals("123")  &&   // false (not equal value)
            !123  == 123  &&   // false (not equal type)
            "abcd".compareTo("dcba") > 0  &&   // true (lexically ordered before)
            "abcd".compareTo("dcba") < 0  &&   // false (lexically ordered after)
            "ABCD".toLowerCase().equals("abcd")  &&   // true (case insensitive comparison of two lowercase strings)
        );
    }
}