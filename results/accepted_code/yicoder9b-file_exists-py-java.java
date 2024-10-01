import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Verify file and directory in current working directory
    System.out.println(new File("input.txt").isFile());
    System.out.println(new File("docs").isDirectory());

    // Verify file and directory at root of filesystem
    System.out.println(
        new File("/")
            .listFiles()); // this will list all files in the root directory, you can't specifically
    // verify a single file or directory as you do with the python script
    // because Java's method is inherently different.
  }
}
