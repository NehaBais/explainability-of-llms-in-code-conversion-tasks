public class Main {
  public static void main(String[] args) {
    StringBuilder str = new StringBuilder("Good Morning");
    String cstr = " to all";
    String cstr2 = " !!!";

    // Append the string literals to the StringBuilder
    str.append(cstr).append(cstr2);

    // Print the contents of the StringBuilder after appending
    System.out.println(str.toString());
  }
}
