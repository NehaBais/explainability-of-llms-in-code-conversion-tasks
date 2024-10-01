import java.io.File;

public class Main {
  public static void main(String[] args) {
    String err = "File move error";

    File file1 = new File("input.txt");
    File file2 = new File("output.txt");
    if (file1.renameTo(file2)) System.out.println("Move to output.txt completed successfully.");
    else System.err.println(err);

    File dir1 = new File("docs");
    File dir2 = new File("mydocs");
    if (dir1.renameTo(dir2)) System.out.println("Move to mydocs completed successfully.");
    else System.err.println(err);

    File file3 = new File("/input.txt");
    File file4 = new File("/output.txt");
    if (file3.renameTo(file4))
      System.out.println("Move /input.txt to /output.txt completed successfully.");
    else System.err.println(err);

    File dir3 = new File("/docs");
    File dir4 = new File("/mydocs");
    if (dir3.renameTo(dir4)) System.out.println("Move /docs to /mydocs completed successfully.");
    else System.err.println(err);
  }
}
