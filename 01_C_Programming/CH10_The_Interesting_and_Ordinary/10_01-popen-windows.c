#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buffer[256];
    
    // Execute 'dir' and open a pipe to read its stdout
    FILE *pipe = _popen("dir", "r");
    if (pipe == NULL) {
        perror("_popen failed");
        return 1;
    }

    // Read the output line by line
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        printf("%s", buffer);
    }

    // Close the pipe and get the command's exit status
    int status = _pclose(pipe);
    printf("\nCommand exited with status: %d\n", status);

    return 0;
}