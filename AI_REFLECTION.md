AI Reflection

Tools: I used Claude  to help me write a first version of min_max.cpp and to draft my README. I then compiled, ran, and read through the code myself.

One decision: The AI's code uses a separate count variable to track how many real values were entered. I considered just checking whether largest was still 0, but that would break for a series like 0, 0, -99, where 0 is real data. I kept count because it clearly separates "no data" from "data that happens to be zero."

A specific check: I ran the series 4, -2, 4, 9, -7, 9, -99. I worked out the answer first: smallest -7 and largest 9. The program printed Largest value: 9 and Smallest value: -7, which matched. This showed that repeated values and updates in the middle of the list work correctly. I also ran -99 alone and got the "No data values were entered." message instead of made-up numbers.

Learning: I can now write a sentinel-controlled loop and initialize the largest and smallest from the first real value instead of from zero. I still need to practice spotting edge cases on my own before I run the code, instead of relying on the required tests.
