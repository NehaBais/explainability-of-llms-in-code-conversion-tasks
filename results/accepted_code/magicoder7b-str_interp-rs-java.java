public class Main {
  public static void main(String[] args) {
    System.out.printf("Mary had a %s lamb", "little");
    // You can specify order
    System.out.printf("%s had a %s lamb", "Mary", "little");
    // Or named arguments if you prefer
    System.out.printf("%1$s had a %2$s lamb", "Mary", "little");
  }
}
