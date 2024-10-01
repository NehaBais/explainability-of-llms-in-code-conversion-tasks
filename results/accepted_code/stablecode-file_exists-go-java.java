import java.io.File;
import java.io.IOException;

public class Main {

    public static void printStat(String path) {
        File file = new File(path);
        try {
            if (file.exists()) {
                if (file.isDirectory())) {
                    System.out.println(path + " is a directory");
                } else {
                    System.out.println(path + " is a file");
                }
            } else {
                System.out.println(path + " does not exist");
            }
        } catch (SecurityException | IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        printStat("input.txt");
        printStat("/input.txt");
        printStat("docs");
        printStat("/docs");
      }
}