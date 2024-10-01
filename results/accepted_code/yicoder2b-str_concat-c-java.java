public class Main {
  public static void main(String[] args) {
    String s1 = "hello"; // Create a string variable
    String s2 = " literal"; // Create another string variable
    System.out.println(s1 + s2); // Show the content of the variables

    s1 = sconcat(s1, s2); // Concatenate and assign new value to s1
    System.out.println(s1); // Show the content of s1
  }

  public static String sconcat(String s1, String s2) {
    return s1 + s2;
  }
}
