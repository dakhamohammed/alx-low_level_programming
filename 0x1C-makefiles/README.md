# 0x1C. C - Makefiles
`C`

## General
* What are `make`, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

### Tasks:
+ Task 0. **make -f 0-Makefile**
  * Makefile that compile `main.c` and `school.c`
    * Executable file: `school`
  * File: `0-Makefile`

+ Task 1. **make -f 1-Makefile**
  * Same as task 0 just with variables `CC`, `SRC`
    * **CC**: the compiler to be used.
    * **SRC**: the .c files.
  * File: `1-Makefile`

+ Task 2. **make -f 2-Makefile**
  * Useful Makefile
    * name of the executable: `school`
    * rules: `all` builds your executable
    * variables: `CC`, `SRC`, `OBJ`, `NAME`
      * **CC**: the compiler to be used
      * **SRC**: the .c files
      * **OBJ**: the .o files
      * **NAME**: the name of the executable
The `all` rule should recompile only the updated source files.
  * File: `2-Makefile`

+ Task 3. **make -f 3-Makefile**
  * name of the executable: `school`
  * rules: `all`, `clean`, `oclean`, `fclean`, `re`
    * **all**: builds your executable
    * **clean**: deletes all Emacs and Vim temporary files along with the executable
    * **oclean**: deletes the object files
    * **fclean**: deletes all Emacs and Vim temporary files, the executable, and the object files
    * **re**: forces recompilation of all source files
  * variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    * **CC**: the compiler to be used
    * **SRC**: the .c files
    * **OBJ**: the .o files
    * **NAME**: the name of the executable
    * **RM**: the program to delete files
The all rule should recompile only the updated source files.
The clean, oclean, fclean, re rules should never fail.
  File: `3-Makefile`

+ Task 4. **A complete Makefile**
  * Same as task 3 but add new variable `CFLAGS`
    * **CFLAGS**: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
  * File: `4-Makefile`

