public class Main {
  public static void main(String[] args) {
    char str[] = new char[24];
    str = "Good Morning".toCharArray();
    char[] cstr = " to all".toCharArray();
    char[] cstr2 = " !!!".toCharArray();
    int x = 0;

    if (str.length + cstr.length + cstr2.length <= str.length) {
      /* 1st method*/
      for (char c : str) System.out.print(c);
      for (char c : cstr) System.out.print(c);
      for (char c : cstr2) System.out.print(c);
      System.out.println();
    }
  }
}
