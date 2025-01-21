import java.io.File;
import java.nio.file.Paths;

public class Main {

    public static void main(String[] args) {
        // Get the size of 'input.txt' in the current working directory
        long size1 = new File("input.txt").length();

        // Get the size of '/input.txt' in the root directory of the file system
        String path = Paths.get("/input.txt").toString();
        int index = path.indexOf(':') + 1; 
        long size2 = new File(path.substring(index))).length();

        // Print the results
        System.out.println("Size of input.txt in current directory: " + size1);
        System.out.println("Size of /input.txt in root directory: " + size2));
    }
}