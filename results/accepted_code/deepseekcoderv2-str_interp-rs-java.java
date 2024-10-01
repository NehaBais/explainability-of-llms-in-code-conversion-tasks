public class Main {
  public static void main(String[] args) {
    System.out.printf("Mary had a %s lamb%n", "little");
    // You can specify order
    System.out.printf("%2$s had a %1$s lamb", "little", "Mary");
    // Or named arguments if you prefer
    System.out.printf("%name had a %adj lamb", adj = "little", name = "Mary");
  }
}
