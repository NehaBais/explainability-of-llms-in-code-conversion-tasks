import java.util.Arrays;

public class Main {
  public static void main(String[] args) {
    String[] myStrings = {"prepended to", "my string"};
    String prepended = Arrays.stream(myStrings).reduce((a, b) -> a + b).get();
    System.out.println(prepended);
  }
}
