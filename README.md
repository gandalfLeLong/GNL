# get_next_line

The goal of this project is to write a function that returns a line read from a file descriptor. It is a fundamental tool for parsing files and handling input in C.

---

### 💡 Key Features
* **Buffer Management:** Efficiently reads a file piece by piece using a specified `BUFFER_SIZE`.
* **Static Variables:** Uses static variables to preserve data between successive function calls.
* **Multi-FD Support:** (If implemented) Capable of managing multiple file descriptors simultaneously without losing the reading thread.
* **Memory Efficiency:** Ensures no memory leaks by carefully managing the heap during string concatenation and buffer shifts.

---

### 🛠️ Compilation & Usage

Since this project does not typically use a Makefile, you compile the source files directly with your project.

**Compilation Example:**
To compile with a specific buffer size (e.g., 42):
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl_test
