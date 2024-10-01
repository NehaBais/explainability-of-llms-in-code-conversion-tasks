public class StringConcatenation {

  public static void main(String[] args) {

    // Text assigned to a string variable
    String s = "hello";

    // Output string variable
    System.out.println(s);

    // This output requested by the original task description, although
    // not really required by the current wording of the task description.
    System.out.println(s + " literal");

    // Concatenate variable and literal, assign result to another string variable
    String s2 = s + " literal";

    // Output second string variable
    System.out.println(s2);
  }
}
