import java.util.*;

public class Main {
  public static void main(String[] args) {
    List<String> myStrings = Arrays.asList("prepended to", "my string");
    String prepended = myStrings.stream().reduce((a, b) -> a + b).orElse("");
    System.out.println(prepended);
  }
}
