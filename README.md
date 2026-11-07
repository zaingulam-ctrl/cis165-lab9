Initial plan

The program reads whole numbers from the user one at a time. The number -99 is the sentinel, so it means "stop" and is not part of the data. I will use a while loop that keeps reading until the number equals -99, so it works for any number of entries.

Variables: number, largest, smallest, count , and a constant SENTINEL set to -99.

Checks and comparisons: the first real value sets both largest and smallest, so I never assume zero was entered. After that, if number > largest I update largest, and if number < smallest I update smallest. 

Expected output: after the sentinel, the program prints the largest and smallest values with labels. 

How to compile and run
Use c++

Type one integer per line and press Enter. Type -99 to finish.

Test records

I compiled with the command above and ran each series. The compile had no warnings or errors.

#	Input	Expected	Actual output	Match?
1	8, 3, 12, -99	Smallest 3; largest 12	Largest value: 12 / Smallest value: 3	Yes
2	-8, -3, -12, -99	Smallest -12; largest -3	Largest value: -3 / Smallest value: -12	Yes
3	5, -99	Smallest 5; largest 5	Largest value: 5 / Smallest value: 5	Yes
4	0, 0, -99	Smallest 0; largest 0	Largest value: 0 / Smallest value: 0	Yes
5	-99	No-data message	No data values were entered.	Yes
6	4, -2, 4, 9, -7, 9, -99	Smallest -7; largest 9	Largest value: 9 / Smallest value: -7	Yes

Test 6 (my own series): I predicted smallest -7 and largest 9 before running. This one mixes positive and negative numbers, repeats values, and puts the smallest and largest values in the middle and end of the list.

No errors came up, so there were no corrections to make. I did not change the code for testing, so nothing needed restoring. I recompiled and reran the final min_max.cpp before the final commit.

Explanation

Trace of 8, 3, 12, -99: Before the loop, count is 0. I read 8, which is not -99, so the loop starts. Since count is 0, I set largest and smallest to 8, then count becomes 1. Next is 3: it is less than smallest, so smallest becomes 3. Next is 12: it is greater than largest, so largest becomes 12. Then -99 is read, the loop condition fails, and the loop ends. The output is largest 12 and smallest 3.

Keeping -99 out of the calculations: The loop condition number != SENTINEL is checked right after every read and before any comparison. When -99 is read, the loop body never runs, so -99 can't be used as the largest or smallest.

Why not initialize both to zero: If every number is negative, like -8, -3, -12, a largest that starts at 0 would never be beaten, so the program would wrongly report 0. In the same way, for all-positive numbers like 5 and 9, a smallest that starts at 0 would stay 0. Zero might not be in the data at all.

Empty series vs. a series with zero: I use the count variable. If count is 0 when the loop ends, nothing was entered. If the user typed 0, count goes up to 1, so it is treated as real data and the program prints 0 for both values.
