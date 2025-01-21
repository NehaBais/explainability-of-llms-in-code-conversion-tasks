public class Main {
  public static void main(String[] args) {
    String str = "my String";
    String cstr = "Changed ";
    str = cstr + str; // Prepend the string using concatenation
    System.out.println(str);
  }
}
