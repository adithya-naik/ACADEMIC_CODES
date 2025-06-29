#include <stdio.h>

int main() {
    int n, frames;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    int pages[n];

    printf("Enter the reference string (page numbers): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &pages[i]);
    }

    printf("Enter number of frames: ");
    scanf("%d", &frames);

    int memory[frames];
    int front = 0; // Points to the oldest page
    int pageFaults = 0;

    // Initialize memory with -1 (empty)
    for (int i = 0; i < frames; i++) {
        memory[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int page = pages[i];
        int found = 0;

        // Check if page is already in memory (page hit)
        for (int j = 0; j < frames; j++) {
            if (memory[j] == page) {
                found = 1;
                break;
            }
        }

        if (!found) {
            // Page fault occurs
            memory[front] = page;         // Replace oldest page
            front = (front + 1) % frames; // Move front pointer
            pageFaults++;

            printf("Page %d caused a fault: [", page);
            for (int j = 0; j < frames; j++) {
                if (memory[j] != -1)
                    printf(" %d", memory[j]);
                else
                    printf(" -");
            }
            printf(" ]\n");
        } else {
            printf("Page %d is a hit. No replacement needed.\n", page);
        }
    }

    printf("\nTotal Page Faults = %d\n", pageFaults);

    return 0;
}
