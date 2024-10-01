public static void main(String[] args) {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);
}

public static void compare(String a, String b) {
    System.out.println("a is of type: " + a.getClass().getSimpleName() + ", and b is of type: " + b.getClass().getSimpleName());
    if (a.compareTo(b) < 0) {
        System.out.println('"' + a + '" is strictly less than "' + b + '".');
    }
    if (a.compareToIgnoreCase(b) <= 0) { // Case-insensitive comparison
        System.out.println('"' + a + '" is less than or equal to "' + b + '".');
    }
    if (a.compareToIgnoreCase(b) > 0) {
        System.out.println('"' + a + '" is strictly greater than "' + b + '".');
    }
    if (a.compareToIgnoreCase(b) >= 0) { // Case-insensitive comparison
        System.out.println('"' + a + '" is greater than or equal to "' + b + '".');
    }
    if (a.equals(b)) {
        System.out.println('"' + a + '" is equal to "' + b + '".');
    }
    if (!a.equals(b)) { // Same as !(a == b) for objects with non-null reference equality
        System.out.println('"' + a + '" is not equal to "' + b + '".');
    }
    if (System.identityHashCode(a) == System.identityHashCode(b)) { // Note: This checks object identity, not string content!
        System.out.println('"' + a + '" has the same object identity as "' + b + '".');
    } else {
        System.out.println('"' + a + '" does not have the same object identity as "' + b + '".');
    }
}