import java.util.*;

public class Main {
  public static void main(String[] args) {
    List<String> myStrings = Arrays.asList("prepended to", "my string");
    String prepended = "";
    for (String str : myStrings) {
      prepended += str;
    }
    System.out.println(prepended);
  }
}
