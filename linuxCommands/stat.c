#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char *argv[])
{
    struct stat s;

    if (argc != 2)
    {
        printf("Usage: %s <file_path>\n", argv[0]);
        return 1;
    }

    if (stat(argv[1], &s) != 0)
    {
        perror("stat");
        return 1;
    }

    printf("\nFile Details\n");
    printf("-------------------------\n");

    if (S_ISREG(s.st_mode))
        printf("Type : Regular File\n");
    else if (S_ISDIR(s.st_mode))
        printf("Type : Directory\n");
    else if (S_ISLNK(s.st_mode))
        printf("Type : Symbolic Link\n");
    else
        printf("Type : Other\n");

    printf("Size : %lld bytes\n", (long long)s.st_size);

    printf("Permissions : %o\n", s.st_mode & 0777);

    printf("Links : %lu\n", (unsigned long)s.st_nlink);

    printf("UID : %u\n", s.st_uid);
    printf("GID : %u\n", s.st_gid);

    printf("Accessed : ");
    printf("%s", ctime(&s.st_atime));

    printf("Modified : ");
    printf("%s", ctime(&s.st_mtime));

    return 0;
}
