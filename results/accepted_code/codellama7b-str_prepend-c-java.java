public class Main {
  public static void main(String[] args) {
    String str = "my String";
    String cstr = "Changed ";
    String dup = new StringBuilder(cstr).append(str).toString();
    System.out.println(dup);
  }
}
