import java.util.ArrayList;

public class Main {
  public static void main(String[] args) {
    // Declare and initialize ArrayList
    ArrayList<String> MyStrings = new ArrayList<>();
    MyStrings.add("prepended to");
    MyStrings.add("my string");

    String prepended = MyStrings.stream().reduce("", (A, b) -> A + b);

    System.out.println(prepended);
  }
}
