Below is the equivalent Java code for the given Rust code:
```
import java.util.Arrays;  // for case insensitives only

public class Main {
    public static void main(String[] args) {
        String a = "abc";
        String b = new String("Bac");

        // Strings are coerced to String when borrowed and needed
        if (a.equals(b)) {
            System.out.println("The strings are equal");
        }
        if (!a.equals(b)) {
            System.out.println("The strings are not equal");
        }
        if (a.compareTo(b) > 0) {
            System.out.println("The first string is lexically after the second");
        }
        if (a.compareTo(b) < 0) {
            System.out.println("The first string is lexically before the second");
        }
        if (!a.equals(b) && a.compareTo(b) > 0) {
            System.out.println("The first string is not lexically before the second");
        }
        if (!a.equals(b) && a.compareTo(b) < 0) {
            System.out.println("The first string is not lexically after the second");
        }

        // case-insensitives:

        // equality
        String[] temp = new String[2];
        temp[0] = a;
        temp[1] = b;
        Arrays.sort(temp, String.CASE_INSENSITIVE_ORDER);
        if (temp[0].equalsIgnoreCase(temp[1])) {
            System.out.println("Both strings are equal when ignoring case");
        }

        // everything else, create owned Strings, then compare as above
        String a2 = a.toUpperCase();
        String b2 = b.toUpperCase();

        // repeat checks
    }
}
```
