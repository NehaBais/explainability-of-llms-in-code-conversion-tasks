import java.io.File;

public class Main {
  public static void main(String[] args) {
    try { // create a new empty file "output.txt" of size 0 bytes and an empty directory "docs"
      File f1 = new File("output.txt");
      if (!f1.createNewFile()) { // return false if the file already exists
        System.out.println("Cannot create output.txt");
      }

      File f2 = new File("docs");
      f2.mkdir(); // create a new empty directory "docs"

    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
