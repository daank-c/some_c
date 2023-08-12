# Short Identifier Generator and Log

This C++ program demonstrates how to generate a short identifier, use it to create a log file, and write the identifier to the log.

## How It Works

1. The program uses a `ShortIDGenerator` class to generate a short alphanumeric identifier.

2. The generated identifier is stored in a variable.

3. The program creates a log file using the identifier as the filename.

4. The identifier is written to the log file.

## Usage

Compile the program using a C++ compiler (e.g., g++) via the `makefile` provided by going to the main directory `generate_id_log` and inputting the following command to your linux terminal

```
   make
```

Once that's created, run the compiled executable:

```
./generate_id_files

```

The program will generate a short identifier, create a log file with the identifier as the filename, and write the identifier to the log file.

The log file will be saved in the id_log directory.

Customize
You can adjust the number of identifiers genwerated by changing the value of numIdentifiers in the main.cpp file.

The generated identifiers are alphanumeric strings, and the length is determined by the generateShortIdentifier() function in short_id_generator.cpp.

Dependencies
This program uses the C++ Standard Library.