Status: **Accepted | 0.012s**

This program takes input from *stdin* and stores the first *int* in a variable and the rest of the input into an integer array.

The program then calls *jolly()*, a function that checks to see whether the input values are jolly or not. The function first takes the differences of all the adjacent integers, stores them in a different integer array, and then sorts them. Then the function checks to see if all the values between 1 and n-1 are present. If they are not present, the function prints out *Not jolly* and returns. If the values are present, the function prints out *Jolly*.
