public static void compare(String a, String b) {
    System.out.println("a is of type " + a.getClass() + " and b is of type " + b.getClass());
    if (a.compareTo(b) < 0) {
        System.out.println("%r is strictly less than %r" + a + ", " + b);
    } else if (a.compareTo(b) <= 0) {
        System.out.println("%r is less than or equal to %r" + a + ", " + b);
    } else if (a.compareTo(b) > 0) {
        System.out.println("%r is strictly greater than %r" + a + ", " + b);
    } else if (a.compareTo(b) >= 0) {
        System.out.println("%r is greater than or equal to %r" + a + ", " + b);
    } else if (a.equals(b)) {
        System.out.println("%r is equal to %r" + a + ", " + b);
    } else if (!a.equals(b)) {
        System.out.println("%r is not equal to %r" + a + ", " + b);
    } else if (a == b) {
        System.out.println("%r has object identity with %r" + a + ", " + b);
    } else if (a != b) {
        System.out.println("%r has negated object identity with %r" + a + ", " + b);
    }
}