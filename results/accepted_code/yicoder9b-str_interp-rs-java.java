public class Main {
  public static void main(String[] args) {
    System.out.printf("Mary had a %s lamb\n", "little");
    // You can specify order using numbers
    System.out.printf("%2$s had a %1$s lamb\n", "little", "Mary");
    // Java does not have named arguments for printf
  }
}
