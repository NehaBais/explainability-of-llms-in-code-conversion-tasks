import java.util.Comparator;
import java.nio.charset.StandardCharsets;

public class Main {

    public static void main(String[] args) {

        // case-sensitive comparisons:

        String a = "abc";
        String b = "Bac";

        if (a.equals(b))) {
            System.out.println("The strings are equal");
        }

        if (a.compareTo(b)) != 0) {
            System.out.println("The first string is lexically after the second");
        } else if (a.compareToIgnoreCase(b))) == -1) {
            System.out.println("The first string is lexically before the second");
        }

        // case-insensitive comparisons:
        if (a.equalsIgnoreCase(b)))) {
            System.out.println("Both strings are equal when ignoring case");
        }
    }
}