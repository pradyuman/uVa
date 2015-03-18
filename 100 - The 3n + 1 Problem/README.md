Status: **Accepted - 0.042s**

This algorithm takes an unsigned int from stdin and puts it through a recursive algorithm *cycle*. *cycle* is called from a *for* loop in *main* for *|m - n|* iterations.

*cycle* returns the number of times the 3n + 1 algorithm needed to be applied. When a number is even, it divides the number by two using bitwise operations. It then adds 1 to the total (for the number of cycle iterations needed). If the number is odd, it multiplies the number by 3 and adds 1 AS WELL AS dividing by 2 (to save time). It then adds 2 to the total number of iterations. If the input number is < 1000001, the number of iterations is saved in *cache[]* so that the algorithm can just pull the number of iterations needed from the array if there is an overlap in numbers.
