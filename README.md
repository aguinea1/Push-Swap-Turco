 [<img src="https://img.shields.io/badge/42-000000.svg?style=for-the-badge&logo=42&logoColor=white"/>](https://profile.intra.42.fr/users/aguinea)
<h1 align="center">
	PUSH SWAP
</h1>
Push Swap it's an algorithm project where you receive between 2 and an infinite quantity of numbers and the goal is to return all the numbers in order with the minimum number of movements (the less, the better). You have to columns (Stack A & Stack B), that you can use to sort the numbers

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

      	❖ Reverse rotate a && Reverse rotate b (rrr) » Does both rotates at the same time and only counts as one movement:
                        A              B
                    |1| → |3|      |4| → |6|
                    |2| → |1|      |5| → |4|
                    |3| → |2|      |6| → |5|

---
## › My Format
</h1>
I decided to do it with a list, that has a pointer to the next node and other to the previous node but it's not a circular list, so the ¨previous pointer¨ from the first node points to NULL, the same with the ¨next pointer¨ of the las node.

 > NOTE: Each node contains the number according to the order in which they have been placed in the output.
---

## › Turkish Algorithm
</h1>
One of the most used algorithms to get a 125/125 (the highest score) is the Turkish/Turco algorithm:

	❖ First, if the program recives 3 or less numbers you have to sort the numbers manually, (sort_three or sort_two funcitons).
	❖ If it's more than 3 numbers you have to apply the Turkish/Turco algorithm:
  		◇ First of all you have to do two PBs
                  +---------+   +---------+                +---------+   +---------+
                  |    1    |   |         |                |    2    |   |    3    |
                  |---------|   |         |                |---------|   |---------|      
                  |    3    |   |         |                |    5    |   |    1    |
                  |---------|   |         |                |---------|   +---------+
                  |    2    |   |         |      ======>   |    4    |
                  |---------|   |         |                +---------+ 
                  |    5    |   |         |                  Stack A       Stack B
                  |---------|   |         |
                  |    4    |   |         |
                  +---------+   +---------+
                    Stack A       Stack B
    	◇ From there, each node of stack A will point to another node in stack B in such a way that all nodes in stack A will have a "target node" in stack B.
      		◇ The target node will be selected by targeting the node in Stack B with the number inmediatly lower of the number in the node from Stack A, and if you have a node in Stack A with a smaller number than every number in Stack B it will automatically target the biggest number in Stack B.
      		◇ Then, the "push cost" must be calculated, which is the number of moves it would take to push a node (from Stack A) and its target node (from Stack B). Among all combinations, the combination of nodes with the lowest "cost" (least number of moves) should be selected. Then, a push operation (pb) is performed, and the two numbers are merged into Stack B.
		◇ So, every time you do a pb you have to refresh the targets, because they'll probably change.
  		◇ The algorithm, will repeat the process until stack A have only 3 numbers, that it must be sortd with the sort_three function.
    		◇ And the last thing, will be about finding targets in reverse, but this time looking for the node in Stack A with the immediately larger number compared to the node in Stack B. If there is a number in Stack B that is higher than any of the numbers in Stack A, its target will point to the node with the smallest number.
---


	








