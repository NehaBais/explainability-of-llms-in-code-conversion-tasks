import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {

    public static void printFileSize(String filename) {
        try {
            long size = Files.size(Paths.get(filename)));
            System.out.println("Size of file " + filename + " is " + size + " bytes.");
        } catch (IOException ex) {
            System.err.println(ex.getMessage()));
        }
    }

    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }
}