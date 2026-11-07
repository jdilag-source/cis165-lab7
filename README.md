# cis165-lab7

Trace one series through the loop, showing when the extrema are initialized and updated.
-So for this I will be using 9,1,24,-99. so first it would read 9 as the largest and as i type 1 it would read it as the smallest but as soon as I type in 24 it will then read it as the largest and then the final print will read 1 as smallest and 24 as largest. 

How does your code keep -99 out of the calculations?
-it keeps it out because when the value is -99, the loop stops before the comparison runs. So -99 can never ben the smallest or the largest.

Why is initializing both extrema to zero incorrect for some series?
-Zero might not be in the series or that zero would compete with the real numbers and it would win even though the answer wouldn't be true.

How do you distinguish an empty series from a series containing zero?
-I would first check whether the first entry is -99. If it is then the series is empty, so I print the no date message and stop. Now if the first entry is 0, that is a real data value, the program continues normally and reports 0 as the largest and smallest. 



Enter integers one at a time. Enter -99 to stop.
Enter a value: 9
Enter a value: 1
Enter a value: 24
Enter a value: -99
Largest value: 24
Smallest value: 1
