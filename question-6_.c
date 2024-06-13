#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error: Unable to open file data.txt\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        char name[50], role[50];
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", name);

        printf("Enter role of employee %d: ", i+1);
        scanf("%s", role);

        
        getchar();

        fprintf(file, "%s,%s\n", name, role);
    }

    fclose(file);

    return 0;
}