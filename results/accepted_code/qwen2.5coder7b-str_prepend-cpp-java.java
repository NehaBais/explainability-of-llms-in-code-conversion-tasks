public class Main {
  public static void main(String[] args) {
    String myStrings[] = {"prepended to", "my string"};
    String prepended = "";
    for (String str : myStrings) {
      prepended += str;
    }
    System.out.println(prepended);
  }
}
