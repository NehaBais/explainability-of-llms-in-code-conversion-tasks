import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Checks if input.txt exists in the current working directory
    System.out.println(new File("input.txt").exists());

    // Checks if input.txt exists at root directory of your filesystem (C:\ for Windows)
    System.out.println(new File("c:/input.txt").exists());

    // Checks if the 'docs' directory exists in your current working directory
    System.out.println(new File("docs").isDirectory());

    // Checks if the 'docs' directory exists at root directory of your filesystem (C:\ for Windows)
    System.out.println(new File("c:/docs").isDirectory());
  }
}
