# ft_printf - Custom Printf Implementation ✔️ 100/100

A complete reimplementation of the C standard library's `printf` function with support for multiple format specifiers and flags.

## 🖨️ About

ft_printf is a project that recreates the behavior of the standard `printf` function from scratch. This implementation handles various format specifiers, flags, width, and precision modifiers, providing a deep understanding of variadic functions and formatted output.

## ✨ Features

### Supported Format Specifiers
- `%c` - Character
- `%s` - String
- `%p` - Pointer address (hexadecimal)
- `%d` - Signed decimal integer
- `%i` - Signed integer (same as %d)
- `%u` - Unsigned decimal integer
- `%x` - Unsigned hexadecimal (lowercase)
- `%X` - Unsigned hexadecimal (uppercase)
- `%%` - Literal percent sign

## 🚀 Compilation

```bash
make            # Compile libftprintf.a
make clean      # Remove object files
make fclean     # Remove object files and library
make re         # Recompile everything
```

## 📦 Usage

1. **Include in your project**:
   ```c
   #include "ft_printf.h"
   ```

2. **Compile with your code**:
   ```bash
   gcc -Wall -Wextra -Werror your_file.c -L. -lftprintf
   ```

3. **Example usage**:
   ```c
   #include "ft_printf.h"
   
   int main(void)
   {
       ft_printf("Hello, %s!\n", "World");
       ft_printf("Number: %d\n", 42);
       ft_printf("Hex: %x\n", 255);
       ft_printf("Pointer: %p\n", &main);
   
       return (0);
   }
   ```

## 🏗️ Project Structure

```
ft_printf/
├── libft/                  # Custom C library functions
├── ft_handle_char.c        # Character format handling
├── ft_handle_hex_lower.c   # Lowercase hex format handling
├── ft_handle_hex_upper.c   # Uppercase hex format handling
├── ft_handle_int.c         # Integer format handling
├── ft_handle_pointer.c     # Pointer format handling
├── ft_handle_string.c      # String format handling
├── ft_handle_unsigned.c    # Unsigned integer format handling
├── ft_printf.c             # Main printf function
├── ft_printf.h             # Header file
├── utils.c                 # Utility functions
├── Makefile               # Build configuration
└── README.md              # This file
```

## 🔧 Function Prototype

```c
int ft_printf(const char *format, ...);
```

**Returns**: Number of characters printed, or -1 on error

## 📋 Format Specifier Examples

```c
// Basic usage
ft_printf("Character: %c\n", 'A');                    // Character: A
ft_printf("String: %s\n", "Hello");                   // String: Hello
ft_printf("Integer: %d\n", -42);                      // Integer: -42
ft_printf("Unsigned: %u\n", 42U);                     // Unsigned: 42
ft_printf("Hex lower: %x\n", 255);                    // Hex lower: ff
ft_printf("Hex upper: %X\n", 255);                    // Hex upper: FF
ft_printf("Pointer: %p\n", ptr);                      // Pointer: 0x7fff5fbff710
