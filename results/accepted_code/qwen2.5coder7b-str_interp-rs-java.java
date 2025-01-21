public class Main {
  public static void main(String[] args) {
    System.out.println("Mary had a %s lamb", "little");
    // You can specify order
    System.out.printf("%2$s had a %1$s lamb%n", "little", "Mary");
    // Or named arguments if you prefer
    System.out.printf("name=%s, adj=%s -> %s had a %s lamb%n", "Mary", "little", "Mary", "little");
  }
}
