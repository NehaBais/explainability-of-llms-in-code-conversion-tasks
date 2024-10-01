import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;

public class Main {

    public static void create(String directory) throws Exception{
        // Create the output file in specified directory.
        File outputFile = new File(directory, "output.txt"));
        outputFile.createNewFile();

        // Create an empty dir in specified directory.
        File docsDir = new File(directory, "docs"));
        if(!docsDir.exists()) {
            docsDir.mkdirs();
        }
    }

    public static void main(String[] args) throws Exception{
        create("."));  // current directory
        create("/");   // root directory
    }
}