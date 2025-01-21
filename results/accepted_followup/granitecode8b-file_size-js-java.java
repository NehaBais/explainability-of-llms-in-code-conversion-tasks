try {
 // Get reference to current working directory
 String cwd = System.getProperty("user.dir");
 
 // Create a File object for input.txt in the current working directory
 File file1 = new File(cwd + "/input.txt");
 
 // Verify size of input.txt
 long size1 = file1.length();
 System.out.println("Size of " + file1.getName() + ": " + size1 + " bytes");
 
 // Create a File object for input.txt in the root directory
 File file2 = new File("c:/input.txt");
 
 // Verify size of input.txt
 long size2 = file2.length();
 System.out.println("Size of " + file2.getName() + ": " + size2 + " bytes");
} catch (Exception e) {
 e.printStackTrace();
}