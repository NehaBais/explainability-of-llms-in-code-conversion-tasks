public class Main {
  public static void main(String[] args) {
    String str = "my String";
    String cstr = "Changed ";

    StringBuilder sb = new StringBuilder();
    sb.append(cstr);
    sb.append(str);

    System.out.println(sb.toString());
  }
}
