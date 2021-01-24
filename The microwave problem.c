/*
My microwave oven at home has this 
functionality where you can hit a "+30" 
button and it will add 30 seconds to 
the time you want to heat your food for. 
This has made me incredibly lazy and 
even if I want to heat something for 
5min, I will just spam the "+30" button 
10 times instead of thinking if there 
are less button presses that will give 
me the same result!

Task: Please write me a function that 
will return the shortest amount of 
button presses to get to the given 
time (As displayed on the screen).

microwave_least_moves(const char *time)

The rules of my Microwave are as follows:
For this problem, you may assume that 
the microwave oven timer always starts at 00:00.

Buttons:

Numbers 0-9 Which when pressed, will add 
that number to the microwave oven 
timer (Starting from the left).

Examples:

If I press "5" then I press "0" twice, 
it will put 05:00 on the timer.

If I press "3" then I press "0" 
it will put 00:30 on the timer

+30 which adds 
30 seconds to the current timer

There is a "Start" button which you have 
to finally press before the microwave oven 
starts. Remember to press this!

There is no need to validate input, it 
will always be valid.

Input may not always be what you expect. 
For example you can put in 00:70 and this is valid
*/


