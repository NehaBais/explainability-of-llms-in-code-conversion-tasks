public class Main {
    public static void main(String[] args) {
        String a = "abc";
        String b = "Bac";

        // Strings are already compared as they are in Java
        if (a.equals(b)) { System.out.println("The strings are equal");
        }
        else { System.out.println("The strings are not equal");

        if (a.compareTo(b) > 0) { System.out.println("The first string is lexically after the second");
        }
        else if (a.compareTo(b) < 0) { System.out.println("The first string is lexically before the second");
        }

        // case-insensitives:
        String a2 = a.toUpperCase();
        String b2 = b.toUpperCase();

        // repeat checks
    }
}