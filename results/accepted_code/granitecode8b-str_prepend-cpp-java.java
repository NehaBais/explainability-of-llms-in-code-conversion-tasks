import java.util.*;

public class Main {
  public static void main(String[] args) {
    List myStrings = Arrays.asList("prepended to", "my string");
    String prepended = String.join("", myStrings);
    System.out.println(prepended);
  }
}
