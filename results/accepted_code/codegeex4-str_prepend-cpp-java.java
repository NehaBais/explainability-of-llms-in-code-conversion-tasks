import java.util.Arrays;
import java.util.stream.Collectors;

public class Main {
  public static void main(String[] args) {
    String[] myStrings = {"prepended to", "my string"};
    String prepended = Arrays.stream(myStrings).collect(Collectors.joining(" "));
    System.out.println(prepended);
  }
}
