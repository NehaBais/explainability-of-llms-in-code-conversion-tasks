public class StringConcat {
  public static void main(String[] args) {
    String s = "hello";
    String s2 = s + " literal";

    System.out.println(s + " literal");
    // or
    System.out.println(s + s2);

    char[] s3 = new char[s.length() + 9];
    System.arraycopy(s.toCharArray(), 0, s3, 0, s.length());
    System.arraycopy(" literal".toCharArray(), 0, s3, s.length(), 9);
    String s4 = new String(s3);

    System.out.println(s4);
  }
}
