I began this problem by reading throught the cpp referance to see any useful string methods i could use to ensure i dont derive any or write less efficient code. 

At a first quick glance nothing really matched where my though process was leading so i decided to just start writing a solution first then id optimize later. 

I began by understanding id need to keep track of 2 indices, being the char i'm currently on and the one that follows. I was tempted to use 2 for loops but quickly realized that would be O(N^2) and wouldnt be neccesary because we know the second index we are tracking will always be +1.

With this found knowledge i used a single for loop that adds the first chars value to a score, removes that char (making the second char the first) then subtracts that new value and takes and absolute value. 

Unfortunately i kept getting an incorrect solution and after adding some debug print statements, i realized i was making a mathematical error by doing a running total that affected how the absolute value was calulated. 

To correct this i get the current value of the calulation being made then add it to a seprate total allowing it to be reset each loop and respecting the order of operation. 