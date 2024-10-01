import java.io.*;

public class FileExists {
  public static void main(String[] args) throws Exception {
    File file = new File(".\\input.txt");
    System.out.println("File exist in current directory? " + file.exists());

    file = new File("/input.txt");
    System.out.println("File exist in root directory? " + file.exists());

    File dir = new File("./docs");
    System.out.println("Directory exist in current directory? " + dir.exists());

    dir = new File("/");
    System.out.println("Directory exist in root directory? " + dir.exists());
  }
}
