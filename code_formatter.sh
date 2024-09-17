echo "Starting code formatting" > results/formatting_log.txt

# format c files
echo "Formatting C files ..." >> results/formatting_log.txt 2>&1
clang-format -i --verbose --style=LLVM results/accepted_code/*.c >> results/formatting_log.txt 2>&1

# format cpp files
echo "Formatting C++ files ..." >> results/formatting_log.txt 2>&1
clang-format -i --verbose --style=LLVM results/accepted_code/*.cpp >> results/formatting_log.txt 2>&1

# format go files
echo "Formatting Go files ..." >> results/formatting_log.txt 2>&1
gofmt -l -w results/accepted_code/*.go >> results/formatting_log.txt 2>&1

# format java files
echo "Formatting Java files ..." >> results/formatting_log.txt 2>&1
google-java-format -i results/accepted_code/*.java >> results/formatting_log.txt 2>&1

# format javascript files
echo "Formatting Javascript files ..." >> results/formatting_log.txt 2>&1
prettier -w results/accepted_code/*.js >> results/formatting_log.txt 2>&1

# format python files
echo "Formatting Python files ..." >> results/formatting_log.txt 2>&1
black results/accepted_code/*.py >> results/formatting_log.txt 2>&1

# format rust files
echo "Formatting Rust files ..." >> results/formatting_log.txt 2>&1
rustfmt -l results/accepted_code/*.rs >> results/formatting_log.txt 2>&1