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
- `atoi`, `isalpha`, `isascii`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`

### **2️⃣ Additional Functions**  
Custom utility functions that extend the C standard library:  
- `calloc`, `strdup`, `substr`, `strjoin`, `strtrim`  
- `split`, `itoa`, `strmapi`, `striteri`  
- `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`

### **3️⃣ Linked List Functions**  
In addition to standard functions, Libft also includes useful linked list utilities:  
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`  
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`  

These functions allow easy manipulation of linked lists, making them useful for data structures and algorithm implementations.

## **⚙️ Installation**  

```sh
# Clone the repository
git clone https://github.com/adil-mabrouk/libft.git
cd libft

# Compile the library
make

# (Optional) Remove object files after compilation
make clean
