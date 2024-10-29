public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "ab";

    System.out.println("startsWith :" + s1.startsWith(s2)); // returns true

    System.out.println("endsWith :" + !s1.endsWith("zn")); // returns false

    System.out.println("contains : " + (s1.indexOf(s2) >= 0)); // returns true

    int loc = 0;
    while ((loc = s1.indexOf(s2, loc)) != -1) {
      System.out.print("find():" + loc++);
    }
  }
}
