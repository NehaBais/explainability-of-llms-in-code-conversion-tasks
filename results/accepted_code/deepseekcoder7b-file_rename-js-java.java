import java.io.File;

public class Main {
  public static void main(String[] args) {
    // here in the current working directory
    rename("input.txt", "output.txt");
    rename("docs", "mydocs");

    // filesystem root, assuming it's C: drive
    rename("C:/input.txt", "C:/output.txt");
    rename("C:/docs", "C:/mydocs");
  }

  private static void rename(String source, String target) {
    File oldFile = new File(source);
    File newFile = new File(target);

    // move file
    if (oldFile.renameTo(newFile)) {
      System.out.println("Successfully moved from " + source + " to " + target);
    } else {
      System.out.println("Failed to move from " + source + " to " + target);
    }
  }
}
