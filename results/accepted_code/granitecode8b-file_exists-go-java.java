import java.io.File;

public class FileExists {
  public static void main(String[] args) {
    // Verify the existence of input.txt and docs in the current working directory
    String path1 = "input.txt";
    String path2 = "docs";
    File file1 = new File(path1);
    File file2 = new File(path2);
    if (file1.exists() && !file1.isDirectory()) {
      System.out.println(path1 + " is a file");
    } else if (!file1.exists()) {
      System.out.println(path1 + " does not exist");
    }
    if (file2.exists() && file2.isDirectory()) {
      System.out.println(path2 + " is a directory");
    } else if (!file2.exists()) {
      System.out.println(path2 + " does not exist");
    }
    // Verify the existence of input.txt and docs on the filesystem root
    String rootPath = "/";
    String rootPath1 = rootPath + path1;
    String rootPath2 = rootPath + path2;
    File rootFile1 = new File(rootPath1);
    File rootFile2 = new File(rootPath2);
    if (rootFile1.exists() && !rootFile1.isDirectory()) {
      System.out.println(rootPath1 + " is a file");
    } else if (!rootFile1.exists()) {
      System.out.println(rootPath1 + " does not exist");
    }
    if (rootFile2.exists() && rootFile2.isDirectory()) {
      System.out.println(rootPath2 + " is a directory");
    } else if (!rootFile2.exists()) {
      System.out.println(rootPath2 + " does not exist");
    }
  }
}
