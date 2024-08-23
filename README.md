# Explainability of LLMs in Code Conversion Tasks

## Programming Languages

- C
- C++
- Go
- Java
- JavaScript
- Python
- Rust

### Combination of conversions

1. C to C++
2. C to Go
3. C to Java
4. C to Javascript
5. C to Python
6. C to Rust

7. C++ to C
8. C++ to Go
9. C++ to Java
10. C++ to Javascript
11. C++ to Python
12. C++ to Rust

13. Go to C
14. Go to C++
15. Go to Java
16. Go to Javascript
17. Go to Python
18. Go to Rust

19. Java to C
20. Java to C++
21. Java to Go
22. Java to Javascript
23. Java to Python
24. Java to Rust

25. Javascript to C
26. Javascript to C++
27. Javascript to Go
28. Javascript to Java
29. Javascript to Python
30. Javascript to Rust

31. Python to C
32. Python to C++
33. Python to Go
34. Python to Java
35. Python to Javascript
36. Python to Rust

37. Rust to C
38. Rust to C++
39. Rust to Go
40. Rust to Java
41. Rust to Javascript
42. Rust to Python

## LLMs specialized for Coding Tasks

### 1-3 B Active Parameters

| Model Name | Active Parameters | Ollama Name | HuggingFace Name | Alias | Paper Link |
|------------|-------------------|-------------|------------------|-------|------------|
| DeepSeek Coder | 1.3B | deepseek-coder:1.3b-instruct | deepseek-ai/deepseek-coder-1.3b-instruct | deepseekcoder | https://doi.org/10.48550/arXiv.2401.14196 |
| CodeGemma | 2B | codegemma:2b | google/codegemma-1.1-2b | codegemma2b | https://doi.org/10.48550/arXiv.2406.11409 |
| DeepSeek Coder V2 | 2.4B | deepseek-coder-v2:16b-lite-base-q4_0 | deepseek-ai/DeepSeek-Coder-V2-Lite-Instruct | deepseekcoderv2 | https://doi.org/10.48550/arXiv.2406.11931 |
| Stable Code | 3B | stable-code:instruct | stabilityai/stable-code-instruct-3b | stablecode | https://doi.org/10.48550/arXiv.2404.01226 |
| Granite Code | 3B | granite-code:3b-instruct | ibm-granite/granite-3b-code-instruct | granitecode3b | https://doi.org/10.48550/arXiv.2405.04324 |

### 6-9 B Active Parameters

| Model Name | Active Parameters | Ollama Name | HuggingFace Name | Alias | Paper Link |
|------------|-------------------|-------------|------------------|-------|------------|
| DeepSeek Coder | 6.7B | deepseek-coder:6.7b-instruct | deepseek-ai/deepseek-coder-6.7b-instruct | deepseekcoder7b | https://doi.org/10.48550/arXiv.2401.14196 |
| Magicoder | 6.7B | magicoder:7b | ise-uiuc/Magicoder-S-CL-7B | magicoder7b | https://doi.org/10.48550/arXiv.2312.02120 |
| Code Llama | 7B | codellama:7b-instruct | meta-llama/CodeLlama-7b-Instruct-hf | codellama7b | https://doi.org/10.48550/arXiv.2308.12950 |
| CodeGemma | 7B | codegemma:7b-instruct | google/codegemma-1.1-7b-it | codegemma7b | https://doi.org/10.48550/arXiv.2406.11409 |
| CodeQwen1.5 | 7B | codeqwen:chat | Qwen/CodeQwen1.5-7B-Chat | codeqwen | https://doi.org/10.48550/arXiv.2309.16609 |
| DolphinCoder | 7B | dolphincoder:7b | cognitivecomputations/dolphincoder-starcoder2-7b | dolphincoder7b | https://huggingface.co/cognitivecomputations/dolphincoder-starcoder2-7b |
| Granite Code | 8B | granite-code:8b-instruct | ibm-granite/granite-8b-code-instruct | granitecode8b | https://doi.org/10.48550/arXiv.2405.04324 |
| CodeGeeX4 | 9B | codegeex4:9b | THUDM/codegeex4-all-9b | codegeex4 | https://doi.org/10.48550/arXiv.2303.17568 |

### 13-22 B Active Parameters

| Model Name | Active Parameters | Ollama Name | HuggingFace Name | Alias | Paper Link |
|------------|-------------------|-------------|------------------|-------|------------|
| Code Llama | 13B | codellama:13b-instruct | meta-llama/CodeLlama-13b-Instruct-hf | codellama13b | https://doi.org/10.48550/arXiv.2308.12950 |
| CodeUp | 13B | codeup:13b | deepse/CodeUp-Llama-2-13b-chat-hf | codeup | https://github.com/juyongjiang/CodeUp |
| DolphinCoder | 15B | dolphincoder:15b | cognitivecomputations/dolphincoder-starcoder2-15b | dolphincoder15b | https://huggingface.co/cognitivecomputations/dolphincoder-starcoder2-15b |
| Granite Code | 20B | granite-code:20b-instruct | ibm-granite/granite-20b-code-instruct | granitecode20b | https://doi.org/10.48550/arXiv.2405.04324 |
| Codestral | 22B | codestral:22b | mistralai/Codestral-22B-v0.1 | codestral | https://mistral.ai/news/codestral/ |

### 33-40 B Active Parameters

| Model Name | Active Parameters | Ollama Name | HuggingFace Name | Alias | Paper Link |
|------------|-------------------|-------------|------------------|-------|------------|
| DeepSeek Coder | 33B | deepseek-coder:33b-instruct | deepseek-ai/deepseek-coder-33b-instruct | deepseekcoder33b | https://doi.org/10.48550/arXiv.2401.14196 |
| Code Llama | 34B | codellama:34b-instruct | meta-llama/CodeLlama-34b-Instruct-hf | codellama34b | https://doi.org/10.48550/arXiv.2308.12950 |
| CodeBooga | 34B | codebooga:34b | oobabooga/CodeBooga-34B-v0.1 | codebooga | https://huggingface.co/oobabooga/CodeBooga-34B-v0.1 |
| Granite Code | 34B | granite-code:34b-instruct | ibm-granite/granite-34b-code-instruct | granitecode34b | https://doi.org/10.48550/arXiv.2405.04324 |
| Phind CodeLlama | 34B | phind-codellama:34b-v2 | Phind/Phind-CodeLlama-34B-v2 | phindcodellama | https://huggingface.co/Phind/Phind-CodeLlama-34B-v2 |

## Basic Programming Language Tasks

| URL | Alias |
|-----|-------|
| https://rosettacode.org/wiki/Address_of_a_variable | var_addr |
| https://rosettacode.org/wiki/Arithmetic/Integer | int_arith |
| https://rosettacode.org/wiki/Bitwise_operations | bit_ops |
| https://rosettacode.org/wiki/Compare_length_of_two_strings | str_len_cmp |
| https://rosettacode.org/wiki/Factors_of_an_integer | int_factors |
| https://rosettacode.org/wiki/Integer_comparison | int_cmp |
| https://rosettacode.org/wiki/Logical_operations | logic_ops |
| https://rosettacode.org/wiki/Pointers_and_references | ptr_ref |
| https://rosettacode.org/wiki/String_append | str_append |
| https://rosettacode.org/wiki/String_comparison | str_cmp |
| https://rosettacode.org/wiki/String_concatenation | str_concat |
| https://rosettacode.org/wiki/String_interpolation_(included) | str_interp |
| https://rosettacode.org/wiki/String_matching | str_match |
| https://rosettacode.org/wiki/String_prepend | str_prepend |
| https://rosettacode.org/wiki/Substring | str_substring |
| https://rosettacode.org/wiki/Check_that_file_exists | file_exists |
| https://rosettacode.org/wiki/Create_a_file | file_create |
| https://rosettacode.org/wiki/File_size | file_size |
| https://rosettacode.org/wiki/Make_directory_path | dir_make |
| https://rosettacode.org/wiki/Rename_a_file | file_rename |

### Language Matrix for these tasks

| Task Alias | C | C++ | Go | Java | Javascript | Python | Rust |
|------------|---|-----|----|------|------------|--------|------|
| int_arith | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| bit_ops | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| str_len_cmp | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| int_factors | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| int_cmp | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| logic_ops | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| str_append | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| str_cmp | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| str_concat | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| str_interp | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| str_match | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| str_prepend | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| str_substring | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| file_exists | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| file_create | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| file_size | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| dir_make | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| file_rename | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |

Pointer related tasks are not possible in some languages.

| Task Alias | C | C++ | Go | Java | Javascript | Python | Rust |
|------------|---|-----|----|------|------------|--------|------|
| var_addr | ✅ | ✅ | ✅ | ❌ | ❌ | ✅ | ✅ |
| ptr_ref | ✅ | ✅ | ✅ | ✅ | ❌ | ✅ | ❌ |
