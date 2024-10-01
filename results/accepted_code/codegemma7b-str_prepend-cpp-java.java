import java.util.Arrays;
import java.util.List;

public class StringConcatenation {

  public static void main(String[] args) {
    List<String> myStrings = Arrays.asList("prepended to", "my string");
    String prepended = myStrings.stream().reduce("", (a, b) -> a + b);
    System.out.println(prepended);
  }
}
