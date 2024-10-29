public class Main {
  public static void main(String[] args) {
    StringBuilder str = new StringBuilder("Good Morning");
    String cstr = " to all";
    String cstr2 = " !!!";

    // Append the string variable with another string literal in the most idiomatic way.
    str.append(cstr).append(cstr2);

    System.out.println("Contents of the variable after append operation: \n" + str.toString());
  }
}
