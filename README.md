# Port Scanner

This is a simple port scanner program in C. It allows you to check the port status on a given destination, determining whether the port is open or closed.

## Requirements

- C-compatible operating system
- C compiler (such as GCC)

Compilation

1 - Make sure you have a C compiler installed on your system.

2 - Open the terminal and navigate to the directory where the port_scanner.c file is located.

3 - Execute the following command to compile the program:
```sh
gcc port_scanner.c -o port_scanner
```

## Usage

1 - After successful compilation, run the program using the following command:
```sh
./port_scanner <destination>
```
2 - Replace <destination> with the IP address or domain name of the target you want to check.

3 - The program will scan ports from 0 to 65535 on the specified destination.

4 - The result will be displayed in the terminal, showing the status of each port checked.

