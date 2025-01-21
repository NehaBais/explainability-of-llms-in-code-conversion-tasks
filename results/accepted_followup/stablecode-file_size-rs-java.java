import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;

public class FileSizeChecker 
{

    public static void main(String[] args) 
    {
        if (args.length < 1)) 
        {
            System.out.println("Please provide a file name as an argument"));
            return;
        }

        String inputFileName = args[0];
        File firstFile = new File(inputFileName);
        File secondFile = new File("/");

        try 
        {
            List<String> firstFileLines = Files.readAllLines(Paths.get(firstFile.toURI().toString()))));
            long firstFileSizeInBytes = firstFileLines.stream().mapToInt(String::length).sum();
            System.out.println("Size of file " + inputFileName + " is " + firstFileSizeInBytes + " bytes"));

            List<String> secondFileLines = Files.readAllLines(Paths.get(secondFile.toURI().toString()))));
            long secondFileSizeInBytes = secondFileLines.stream().mapToInt(String::length).sum();
            System.out.println("Size of file in root directory is " + secondFileSizeInBytes + " bytes"));

        } 
        catch (Exception e) 
        {
            System.err.println("Error occurred while reading the files: " + e.getMessage()));
            e.printStackTrace();
            return;
        }
    }
}