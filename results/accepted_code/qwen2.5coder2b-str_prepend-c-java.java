public class Main {
  public static void main(String[] args) {
    String str = "my String";
    String cstr = "Changed ";
    String dup = new String(str.toCharArray());
    str = cstr + dup;
    System.out.println(str);
  }
}
