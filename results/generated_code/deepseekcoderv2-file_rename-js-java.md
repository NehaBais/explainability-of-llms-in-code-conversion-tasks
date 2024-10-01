### Solution 1:
```java
public class ConvertJava {
    public static void main(String[] args) throws IOException, FileNotFoundException {
        if (args.length != 2 || !args[0].equals("-f")) {
            System.out.println("Usage: java Converter [-f] <input-file>");
            return;
        }

        String inputFileName = args[1];
        File inputFile = new File(inputFileName);
        if (!inputFile.exists()) {
            throw new FileNotFoundException("Input file not found");
        }

        String outputFileName = "output.txt";
        File outputFile = new File(outputFileName);
        boolean overwriteOutput = true; // default: overwrite the output file

        if (inputFileName.equals(outputFileName)) {
            System.out.println("Input and output files cannot have the same name.");
            return;
        }

        if (!overwriteOutput) {
            File tempFile = new File("temp.txt");
            try (PrintWriter writer = new PrintWriter(tempFile)) {
                BufferedReader reader = new BufferedReader(new FileReader(inputFileName));
                String line;
                while ((line = reader.readLine()) != null) {
                    writer.println(line);
                }
            } catch (IOException e) {
                System.out.println("An error occurred while reading the input file.");
                return;
            }
        }
    }
}
```
