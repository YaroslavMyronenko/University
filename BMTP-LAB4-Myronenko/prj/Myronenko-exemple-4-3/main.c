#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int totalpages, pagesread, pagesperday;

    printf("Enter the total number of pages in the book: ");
    if (scanf("%hu", &totalpages) && totalpages < 0) {
        printf("Error: Invalid input. Total pages must be a positive integer.\n");
        return 1;
    }

    printf("Enter the number of pages read: ");
    if (scanf("%hu", &pagesread) && pagesread > totalpages || pagesread < 0) {
        printf("Error: Invalid input. Pages read must be a positive integer and cannot exceed total pages.\n");
        return 1;
    }

    printf("Enter the number of pages read per day: ");
    if (scanf("%hu", &pagesperday) && pagesperday < 0) {
        printf("Error: Invalid input. Pages per day must be a positive integer.\n");
        return 1;
    }

    unsigned short int pagesleft = totalpages - pagesread;
    unsigned short int daysleft = pagesleft / pagesperday;
    unsigned short int weeksleft = daysleft / 7;

    printf("Pages left to read: %hu\n", pagesleft);
    printf("It takes weeks to complete a book: %hu\n", weeksleft);

    return 0;
}
