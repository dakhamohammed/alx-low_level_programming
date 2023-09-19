# 0x18. C - Dynamic libraries

### Files:
1. **libdynamic.so** & **main.h**
   - Dynamic library libdynamic.so containing all the functions listed below:
     ```c
     - int _putchar(char c);
     - int _islower(int c);
     - int _isalpha(int c);
     - int _abs(int n);
     - int _isupper(int c);
     - int _isdigit(int c);
     - int _strlen(char *s);
     - void _puts(char *s);
     - char *_strcpy(char *dest, char *src);
     - int _atoi(char *s);
     - char *_strcat(char *dest, char *src);
     - char *_strncat(char *dest, char *src, int n);
     - char *_strncpy(char *dest, char *src, int n);
     - int _strcmp(char *s1, char *s2);
     - char *_memset(char *s, char b, unsigned int n);
     - char *_memcpy(char *dest, char *src, unsigned int n);
     - char *_strchr(char *s, char c);
     - unsigned int _strspn(char *s, char *accept);
     - char *_strpbrk(char *s, char *accept);
     - char *_strstr(char *haystack, char *needle);
     ```

2. **1-create_dynamic_lib.sh**
   - Shell script that creates a dynamic library called liball.so from all the .c files that are in the current directory.


3. **100-operations.so**
   - Dynamic library that contains C functions that can be called from Python.
     - Functions in the library:
       ```c
       - int add(int a, int b);
       - int sub(int a, int b);
       - int mul(int a, int b);
       - int div(int a, int b);
       - int mod(int a, int b);
       ```
     - To call this library from python source file ex(100-tests.py):
       ```python
       import ctypes
       import random
       cops = ctypes.CDLL('./100-operations.so')
       a = random.randint(-111, 111)
       b = random.randint(-111, 111)
       print("{} + {} = {}".format(a, b, cops.add(a, b)))
       print("{} - {} = {}".format(a, b, cops.sub(a, b)))
       print("{} x {} = {}".format(a, b, cops.mul(a, b)))
       print("{} / {} = {}".format(a, b, cops.div(a, b)))
       print("{} % {} = {}".format(a, b, cops.mod(a, b)))
       ```
     - Testing:
       ```
       $ python3 100-tests.py
       39 + -62 = -23
       39 - -62 = 101
       39 x -62 = -2418
       39 / -62 = 0
       39 % -62 = 39
       ```
4. **101-make_me_win.sh**
   - Giga Millions program.

