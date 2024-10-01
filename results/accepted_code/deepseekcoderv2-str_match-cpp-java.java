public class Main {

  public static void main(String[] args) {

    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    System.out.println("Beginning: " + s1.startsWith(s3)); // returns false;
    System.out.println("End:" + s1.endsWith(s3)); // returns true;
    int i = 0;
    while ((i = s2.indexOf(s3, i)) != -1) {
      System.out.println("Anywhere: " + i);
      i++;
    }
  }
}
