 [<img src="https://img.shields.io/badge/42-000000.svg?style=for-the-badge&logo=42&logoColor=white"/>](https://profile.intra.42.fr/users/aguinea)
<h1 align="center">
	PUSH SWAP
</h1>
Push Swap it's an algorithm project where you receive between 2 and an infinite quantity of numbers and the goal is to return all the numbers in order with the minimum number of movements (the less, the better). You have to columns (Stack A & Stack B), that you can use to sort the numbers


> Here is an .
---
## › Instruction set
</h1>
If you want to have the best grade (125/125) the rules are:

	❖ Sort three numbers in less than 3 moves.
	❖ Sort five numbers in less than 5 moves.
	❖ Sort a hundred numbers in less than 700 moves.
	❖ Sort five hundred numbers in less than 5500 moves.
---
## › Moves
</h1>
You can only use this movements:

	❖  Swap a (sa) » Changes the first number for the second one, and the second one becomes the first one (only on Stack A):
                     A
                 |1| → |2|
                 |2| → |1|
   	❖  Swap b (sb) » Changes the first number for the second one, and the second one becomes the first one (only on Stack B):
                     B
                 |1| → |2|
                 |2| → |1|
   	❖  Swap a && Swap b (ss) » Does both swaps at the same time and only counts as one movement:
                     A              B
                 |1| → |2|      |1| → |2|
                 |2| → |1|      |2| → |1|
	❖ Push a (pa) » Takes the first number on stack A and places it on top of Stack B:
                  A     B        A     B   
                 |1|   |5|  →   |5|   |4|
		 |2|   |4|  →   |1|   |3|
                       |3|      |2|
	❖ Push b (pb) » Takes the first number on stack B and places it on top of Stack A:
                  A     B        A     B   
                 |1|   |5|  →   |2|   |1|
		 |2|   |4|  →   |3|   |5|
                                      |4|
	❖ Rotate a (ra) » Shift all the elements in the stack up by one position, making the first element move to the last position (only on the stack A):
                        A
                    |1| → |2|  
                    |2| → |3|  
                    |3| → |1| 
	❖ Rotate b (rb) » Shift all the elements in the stack up by one position, making the first element move to the last position (only on the stack B):
                        B
                    |1| → |2|  
                    |2| → |3|  
                    |3| → |1| 
	❖ Rotate a && Rotate b (rr) » Does both rotates at the same time and only counts as one movement:
                        A              B
                    |1| → |2|      |4| → |5|
                    |2| → |3|      |5| → |6|
                    |3| → |1|      |6| → |4|

	❖ Reverse Rotate a (rra) » Shift all the elements in the stack down by one position, making the last element move to the top (only on the stack A):
                       A
                   |1| → |3|
                   |2| → |1|
                   |3| → |2|

    ❖ Reverse Rotate a (rrb) » Shift all the elements in the stack down by one position, making the last element move to the top (only on the stack B):
                      B
                  |1| → |3|
                  |2| → |1|
                  |3| → |2|
