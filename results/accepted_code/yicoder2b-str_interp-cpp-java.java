import java.util.*;

public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb.", toBeReplaced = "X", replacement = "little";
    System.out.println(original.replace(toBeReplaced, replacement));
  }
}
