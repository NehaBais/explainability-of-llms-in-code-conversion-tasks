import java.io.File;

public class Main {
  public static void main(String[] args) {
    File file1 = new File("input.txt");
    File file2 = new File("/input.txt");

    if (file1.exists() && !file1.isDirectory()) {
      System.out.println("Size of input.txt in the current working directory: " + file1.length());
    } else {
      System.out.println("File does not exist or is a directory.");
    }

    if (file2.exists() && !file2.isDirectory()) {
      System.out.println("Size of /input.txt: " + file2.length());
    } else {
      System.out.println("/input.txt does not exist or is a directory.");
    }
  }
}
