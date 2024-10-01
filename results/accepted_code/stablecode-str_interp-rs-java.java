public class Main {

  public static void main(String[] args) {
    System.out.printf("Mary had a %s lamb%n", "big");
    // You can specify order
    System.out.printf("%1$s had a %0$s lamb%n", "Mary", "little");
    // Or named arguments if you prefer
    System.out.printf("%name had a %adj lamb%n", "Mary", "little");
  }
}
