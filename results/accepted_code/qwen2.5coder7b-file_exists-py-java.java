import java.io.File;

public class Main {
  public static void main(String[] args) {

    // For the current working directory
    File file1 = new File("input.txt");
    System.out.println(file1.exists() && file1.isFile());

    File dir1 = new File("docs");
    System.out.println(dir1.exists() && dir1.isDirectory());

    // For a file and a directory in the filesystem root
    String rootPath = System.getProperty("file.separator"); // get the system's file separator

    File file2 = new File(rootPath + "input.txt");
    System.out.println(file2.exists() && file2.isFile());

    File dir2 = new File(rootPath + "docs");
    System.out.println(dir2.exists() && dir2.isDirectory());
  }
}
