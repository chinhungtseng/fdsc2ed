/* Exercise 11
   [Towers of Hanoi] There are three towers and 64 disks of different diameters
   placed on the first tower. the disks are in order of decreasing diameters
   as one scans up the tower. Monks were reputedly supposed to move the disk 
   from tower 1 to tower 3 obeying the rules:

       (a) Only one disk can be moved at any time.
       (b) No disk can be placed on top of a disk with a smaller diameter.

    Write a recursive function that prints out the sequence of moves needed 
    to accomplish this task.
    
    
    pseudocode

    tower (disk, source, inter, dest) {
        if disk is equal to 1, then
            move disk from source to destination
        else {
            tower(disk - 1, source, dest, inter)  # move top (n-1) from source to intermediate.
            move disk from source to destination  
            tower(disk - 1, inter, source, dest)  # move top(n-1) from intermediate to source.
        }
    } 
    */

#include <stdio.h>

void towerOfHanoi (int n, char source, char inter, char dest)
{
    if (n == 1)
        printf("mov disk 1 from %c to %c\n", source, dest);
    else {
        towerOfHanoi(n - 1, source, dest, inter);
        printf("mov disk %i from %c to %c\n", n, source, dest);
        towerOfHanoi(n - 1, inter, source, dest);
    }
}

int main (void)
{
    int n;
    void towerOfHanoi (int n, char source, char inter, char dest);

    printf("\nEnter disk number: ");
    scanf("%i", &n);
    
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
