/* Program 1.5 Searching a sorted list 

   The algorithm contains two subtasks:
   (1) determining if there are any integers left to check.
   (2) comparing searchnum to list[middle].                  */

while (there are more integers to check) {
    middle = (left + right) / 2;
    if (searchnum < list[middle])
        right = middle - 1;
    else if (searchnum == list[middle])
        return middle;
    else left = middle + 1;
}