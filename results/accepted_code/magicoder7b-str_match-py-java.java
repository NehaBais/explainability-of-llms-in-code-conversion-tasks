public class Main {
  public static void main(String[] args) {
    String str1 = "abcd";
    String str2 = "ab";

    System.out.println("Starts with? " + str1.startsWith(str2)); // True

    int loc = str1.indexOf(str2);
    if (loc != -1) {
      System.out.println("Contains at location: " + loc);
    } else {
      System.out.println("Does not contain");
    }

    System.out.println("Ends with? " + str1.endsWith(str2)); // False
  }
}
