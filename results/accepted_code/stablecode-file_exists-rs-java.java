import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        
        // For current working directory
        checkFileAndDirectory(".");
        
        // For file and directory in filesystem root
        checkFileAndDirectory("/");
        
    }
    
    private static void checkFileAndDirectory(String path){

        Path docs = Paths.get(path, "docs"));
        Path inputFile= Paths.get(path, "input.txt"));

        if (Files.exists(inputFile)) {
            System.out.println("The file: '" +  inputFile.getFileName() + "' exists in the directory '"+ path +"'");
        } else {
            System.out.println("The file 'input.txt' does not exist in the current working directory or any sub-directory."));
        }

        if (Files.exists(docs))) {
            System.out.println("Directory: '"+ docs +"' exists in the current working directory."));
        } else {
            System.out.println("The directory 'docs' does not exist in the current working directory or any sub-directory."));
        }

    }

}