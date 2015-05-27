Status: **Accepted | 0.029s**

This program takes two integers from *stdin* and stores them into two integers.

The program then loops through all the digits in the integers. To determine if there is a carry, the two digits are added together; if the sum + the previous carry is larger than 9, that means the carry will propogate to the next digit sum. A variable keeps track of the number of times a carry is generated and propogated and the appropriate outputs are printed at the end of the analysis.
