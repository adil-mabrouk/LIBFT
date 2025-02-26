# **Libft**  
> My own C standard library implementation for 42 School.

## **📌 Overview**  
Libft is a custom implementation of a subset of the C standard library functions, along with additional utility functions. This project is designed to reinforce fundamental concepts in C programming, including memory manipulation, string handling, linked lists, and more.

## **📂 Files & Functions**  

### **1️⃣ Libc Functions**  
Reimplementations of standard C library functions, such as:  
- `memset`, `bzero`, `memcpy`, `memmove`  
- `strlcpy`, `strlcat`, `strchr`, `strrchr`  
- `strncmp`, `memchr`, `memcmp`, `strnstr`  
- `atoi`, `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`

### **2️⃣ Additional Functions**  
Custom utility functions that extend the C standard library:  
- `calloc`, `strdup`, `substr`, `strjoin`, `strtrim`  
- `split`, `itoa`, `strmapi`, `striteri`  
- `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`

### **3️⃣ Linked List Functions**  
If you implemented linked list utilities, they include:  
- `lstnew`, `lstadd_front`, `lstsize`, `lstlast`  
- `lstadd_back`, `lstdelone`, `lstclear`, `lstiter`, `lstmap`

## **⚙️ Installation**  

```sh
# Clone the repository
git clone https://github.com/adil-mabrouk/libft.git
cd libft

# Compile the library
make

# (Optional) Remove object files after compilation
make clean
