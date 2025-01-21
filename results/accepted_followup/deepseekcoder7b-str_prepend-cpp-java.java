import java.util.*;

public class Main {
  public static void main(String[] args) {
    ArrayList<String> myStrings = new ArrayList<>(Arrays.asList("prepended to", "my string"));

    StringBuilder prepended = new StringBuilder();
    for (String str : myStrings) {
      prepended.insert(0, str); // This line is equivalent to your C++ std::accumulate function
    }

    System.out.println(prepended.toString());
  }
}
