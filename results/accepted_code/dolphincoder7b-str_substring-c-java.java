public class Main {
  public static void main(String[] args) {
    char[] s = "hello world shortest program".toCharArray();

    TEST("short");
    TEST("world shortest program");
    TEST("... progra");
    TEST("world");
    TEST("rog");
  }

  private static void TEST(String str) {
    System.out.println(str);
  }
}
