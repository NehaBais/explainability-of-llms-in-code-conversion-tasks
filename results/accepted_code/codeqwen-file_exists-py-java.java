import java.io.File;

public class Main {
  public static void main(String[] args) {
    // For the current working directory
    File file1 = new File("input.txt");
    System.out.println("Does input.txt exist in the current working directory? " + file1.exists());

    File dir1 = new File("docs");
    System.out.println("Does docs exist in the current working directory? " + dir1.isDirectory());

    // for a file and a directory in the filesystem root
    File file2 = new File("/input.txt");
    System.out.println("Does /input.txt exist in the root directory? " + file2.exists());

    File dir2 = new File("/docs");
    System.out.println("Does /docs exist in the root directory? " + dir2.isDirectory());
  }
}
