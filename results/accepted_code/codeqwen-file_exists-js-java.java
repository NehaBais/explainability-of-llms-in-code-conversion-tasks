import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Check current working directory
    if (new File("input.txt").exists() && new File("docs").isDirectory()) {
      System.out.println("Both input.txt and docs folder exist in the current working directory.");
    } else {
      System.out.println(
          "One or both of input.txt or docs does not exist in the current working directory.");
    }

    // Check filesystem root
    if (new File("c:/input.txt").exists() && new File("c:/docs").isDirectory()) {
      System.out.println("Both input.txt and docs folder exist in the filesystem root.");
    } else {
      System.out.println("One or both of input.txt or docs does not exist in the filesystem root.");
    }
  }
}
