public class StringInterpolationExample {
  public static void main(String[] args) {
    System.out.println("Mary had a " + "little" + " lamb");
    System.out.println("{0} had a {1} lamb", "Mary", "little");
    System.out.println("{name} had a {adj} lamb", "Mary", "little", "adj");
  }
}
