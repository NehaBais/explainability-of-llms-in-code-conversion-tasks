public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb";
    String little = "big";

    // using replace method of String class in java
    String replaced = original.replace("X", little);

    System.out.println(original); // it will print: Mary had a X lamb
    System.out.println(replaced); // it will print: Mary had a big lamb
  }
}
