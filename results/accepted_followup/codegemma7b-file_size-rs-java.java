try {
  File file = new File(fileName);
  long size = file.length();
  System.out.println("Size of " + fileName + " is " + size + " bytes");
} catch (IOException e) {
  System.err.println("Error: " + e.getMessage());
  System.exit(1);
}