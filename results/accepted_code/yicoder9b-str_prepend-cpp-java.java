public class Main {
  public static void main(String[] args) {
    String[] myStrings = {"prepended to", "my string"};
    StringBuilder prepended = new StringBuilder();
    for (int i = myStrings.length - 1; i >= 0; --i) {
      prepended.append(myStrings[i]);
    }
    System.out.println(prepended.toString());
  }
}
