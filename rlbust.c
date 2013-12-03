#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

// Breaking input:
// 1. Type "123", press return.
// 2. Type "hello", press return.
// 3. Press the up arrow twice, see "hell123".
// 4. Press return, see "123".

int main() {
    const char *prompt = "\001\002>>>\001\002 ";
    for (;;) {
        char *line = readline(prompt);
        add_history(line);
        puts(line);
        free(line);
    }

    return EXIT_SUCCESS;
}
