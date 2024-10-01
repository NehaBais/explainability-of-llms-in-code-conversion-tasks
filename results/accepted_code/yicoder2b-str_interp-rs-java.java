public class Main {
  public static void main(String[] args) {
    System.out.println("Mary had a " + "little lamb");
    // You can specify order
    System.out.println("%s had a %s lamb", "Mary", "little");
    // Or named arguments if you prefer
    System.out.printf("%s had a %s lamb", "Mary", "little");
  }
}
