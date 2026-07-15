The moment i understood what a palindrome was i knew my approach would be to use string manipulation

I first read from the reference how to convert int to string. Post discovering the  to_string method i had a generational lock in and entered flow state

I realized i could cut the runtime down by only iterating through half the string and using to indices to check whether or not they match.(since a full loop woould do the same thing twice)

Increadibly i also realized that for odd number the middle number didnt matter since its value could be anything and that wouldnt change anything. This meant i could do division and use the fact that the int would automatically truncate any double values, effectively allowing the function to work on odd or even length ints.

Once i start the loop i shorten the runtime even more by checking for a negative and returning the moment i do. (as opposed to checking if they are equal through the whole string)

I'm quite proud of this one lots of small optimizations really helped acheive a runtime of 5ms! It's not a 0ms but i'm still learning and getting better.