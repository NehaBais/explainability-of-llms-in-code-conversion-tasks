public class Main {
  public static void main(String[] args) {
    String a = "YUP";
    String b = "YUP";

    System.out.println(
        "a is of type " + a.getClass().getName() + " and b is of type " + b.getClass().getName());
    if (a.compareTo(b) < 0) System.out.println(a + " is strictly less than " + b);
    else if (a.compareTo(b) <= 0) System.out.println(a + " is less than or equal to " + b);
    else if (a.compareTo(b) > 0) System.out.println(a + " is strictly greater than " + b);
    else if (a.compareTo(b) >= 0) System.out.println(a + " is greater than or equal to " + b);
    else if (a.equals(b)) System.out.println(a + " is equal to " + b);
    else if (a != b) System.out.println(a + " is not equal to " + b);

    int num1 = 24;
    int num2 = 123;

    System.out.println(
        "num1 is of type "
            + num1.getClass().getName()
            + " and num2 is of type "
            + num2.getClass().getName());
    if (num1 < num2) System.out.println(num1 + " is strictly less than " + num2);
    else if (num1 <= num2) System.out.println(num1 + " is less than or equal to " + num2);
    else if (num1 > num2) System.out.println(num1 + " is strictly greater than " + num2);
    else if (num1 >= num2) System.out.println(num1 + " is greater than or equal to " + num2);
    else if (num1 == num2) System.out.println(num1 + " is equal to " + num2);
    else if (num1 != num2) System.out.println(num1 + " is not equal to " + num2);

    double d1 = 5.0;
    double d2 = 5;

    System.out.println(
        "d1 is of type "
            + d1.getClass().getName()
            + " and d2 is of type "
            + d2.getClass().getName());
    if (d1 < d2) System.out.println(d1 + " is strictly less than " + d2);
    else if (d1 <= d2) System.out.println(d1 + " is less than or equal to " + d2);
    else if (d1 > d2) System.out.println(d1 + " is strictly greater than " + d2);
    else if (d1 >= d2) System.out.println(d1 + " is greater than or equal to " + d2);
    else if (d1 == d2) System.out.println(d1 + " is equal to " + d2);
    else if (d1 != d2) System.out.println(d1 + " is not equal to " + d2);
  }
}
