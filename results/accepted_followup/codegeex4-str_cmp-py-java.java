public class Main {
  public static void compare(Object a, Object b) {
    System.out.printf(
        "%1$s is of type %2$s and %3$s is of type %4$s\n",
        a, a.getClass().getName(), b, b.getClass().getName());

    if (a instanceof Comparable && b instanceof Comparable) {
      Comparable comparableA = (Comparable) a;
      Comparable comparableB = (Comparable) b;

      if (comparableA.compareTo(comparableB) < 0)
        System.out.printf("%1$s is strictly less than %2$s\n", a, b);
      if (comparableA.compareTo(comparableB) <= 0)
        System.out.printf("%1$s is less than or equal to %2$s\n", a, b);
      if (comparableA.compareTo(comparableB) > 0)
        System.out.printf("%1$s is strictly greater than %2$s\n", a, b);
      if (comparableA.compareTo(comparableB) >= 0)
        System.out.printf("%1$s is greater than or equal to %2$s\n", a, b);

      if (a.equals(b)) System.out.printf("%1$s is equal to %2$s\n", a, b);
      if (!a.equals(b)) System.out.printf("%1$s is not equal to %2$s\n", a, b);

    } else {
      System.out.println("The objects are not comparable.");
    }
  }

  public static void main(String[] args) {
    compare(5, 10);
    compare("Hello", "World");
    compare(3.14, 3.14159);
  }
}
