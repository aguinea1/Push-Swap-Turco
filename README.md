<h1 align="center">
	PUSH SWAP
 </h1>

<p align="center">
	<img src="https://img.shields.io/badge/Language-C-blue?style=flat-square"/>
	<img src="https://img.shields.io/badge/Stacks-A%20%26%20B-yellow?style=flat-square"/>
	<img src="https://img.shields.io/badge/500%20Numbers-4150%20Moves-brightgreen?style=flat-square"/>
</p>

---
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
  		◇ First of all you have to do two PBs:
    
                  +---------+   +---------+                +---------+   +---------+
                  |    1    |   |         |                |    6    |   |    5    |
                  |---------|   |         |                |---------|   |---------|      
                  |    5    |   |         |                |    3    |   |    1    |
                  |---------|   |         |                |---------|   +---------+
                  |    6    |   |         |      ======>   |    4    |
                  |---------|   |         |                |---------|
                  |    5    |   |         |                |    2    |  
                  |---------|   |         |                +---------+ 
                  |    4    |   |         |                  Stack A       Stack B
                  |---------|   |         |
                  |    2    |   |         |
                  +---------+   +---------+
                    Stack A       Stack B
		    
    	◇ From there, each node of stack A will point to another node in stack B in such a way that all nodes in stack A will have a "target node" in stack B.
      	◇ The target node will be selected by targeting the node in Stack B with the number inmediatly lower of the number in the node from Stack A, and if you have a node in Stack A with a smaller number than every number in Stack B it will automatically target the biggest number in Stack B. In this Example:

                                    +-----------------+------------------+
                                    | Node in Stack A | It's target in B |
                                    +-----------------+------------------+
                                    |         6       |         5        |
                                    +-----------------+------------------+
                                    |         3       |         1        |
                                    +-----------------+------------------+
                                    |         4       |         1        |
                                    +-----------------+------------------+
                                    |         2       |         1        |
                                    +-----------------+------------------+
				    
      	◇ Then, the "push cost" must be calculated, which is the number of moves it would take to put a node on top of Stack and pushi it to Stack B and put on top of Stack B its target node.(So, when you push the node in Stack A to Stack B, that node and its target will be together). Among all combinations, the combination of nodes with the lowest "cost" (least number of moves) should be selected. Then, a push operation (pb) is performed, and the two numbers are merged into Stack B.
		->In this case the ¨cheapest¨ combination to push it's 6 and it's target 5, because that action it only takes 1 movement(pb).

                    +---------+    +---------+                                    +---------+    +---------+
                    |    6    |    |    5    |                                    |    3    |    |    6    |
                    |---------|    |---------|                                    |---------|    |---------|
                    |    5    |    |    1    |          ======>                   |    4    |    |    5    |
                    |---------|    +---------+                                    |---------|    |---------|
                    |    4    |                                                   |    2    |    |    1    |
                    |---------|                                                   +---------+    +---------+ 
                    |    2    |                                                     Stack A        Stack B
                    +---------+                                                  
                     Stack A        Stack B                                          

	◇ So, every time you do a pb you have to refresh the targets, because they'll probably change.
  	◇ The algorithm, will repeat the process until stack A have only 3 numbers, that it must be sorted with a sort_three function (manually). In this case the sort three it's done with just rra.
    
                            +---------+    +---------+                   +---------+    +---------+
                            |    3    |    |    6    |                   |    2    |    |    6    |
                            |---------|    |---------|                   |---------|    |---------|
                            |    4    |    |    5    |        ======>    |    3    |    |    5    |
                            |---------|    |---------|                   |---------|    |---------|
                            |    2    |    |    1    |                   |    4    |    |    1    |
                            +---------+    +---------+                   +---------+    +---------+   
                              Stack A        Stack B                       Stack A        Stack B

        ◇ And the last thing, will be about finding targets in reverse, but this time looking for the node in Stack A with the immediately bigger number compared to the node in Stack B. If there is a number in Stack B that is higher than any of the numbers in Stack A, its target will point to the node with the smallest number.

                                    +-----------------+------------------+
                                    | Node in Stack B | It's target in A |
                                    +-----------------+------------------+
                                    |         6       |         2        |
                                    +-----------------+------------------+
                                    |         5       |         2        |
                                    +-----------------+------------------+
                                    |         1       |         2        |
                                    +-----------------+------------------+

	◇ In this case, the ¨cheapest¨ push cost is pushing the 6 (push cost = 1):
 
                            +---------+    +---------+                   +---------+    +---------+
                            |    2    |    |    6    |                   |    6    |    |    5    |
                            |---------|    |---------|                   |---------|    |---------|
                            |    3    |    |    5    |        ======>    |    2    |    |    1    |
                            |---------|    |---------|                   |---------|    +---------+
                            |    4    |    |    1    |                   |    3    |
                            +---------+    +---------+                   |---------|    
                                                                         |    4    |
                                                                         +---------+                      
                              Stack A        Stack B                       Stack A        Stack B

	◇ Now the target from 5 has changed to 6, and at the same time now becomes the cheapest movement (push cost = 1), that's what I say that yo have to refresh all that things every time you do pushes(including pa && pb):

                            +---------+    +---------+                   +---------+    +---------+
                            |    6    |    |    5    |                   |    5    |    |    1    |
                            |---------|    |---------|                   |---------|    +---------+
                            |    2    |    |    1    |        ======>    |    6    |   
                            |---------|    +---------+                   |---------|    
                            |    3    |                                  |    2    |
                            |---------|                                  |---------|    
                            |    4    |                                  |    3    |
                            +---------+                                  |---------| 
                                                                         |    4    |
                                                                         +---------+
                              Stack A        Stack B                       Stack A        Stack B  

	◇ And now the 1 has as target the 2, which push cost is 3 (2 ra, and a pa):

            +---------+    +---------+                   +---------+    +---------+                      +---------+    +---------+
            |    5    |    |    5    |                   |    2    |    |    1    |                      |    1    |    |         |
            |---------|    |---------|                   |---------|    +---------+                      |---------|    |         |    
            |    6    |    |    1    |      ======>      |    3    |                       ======>       |    2    |    |         |
            |---------|    +---------+                   |---------|                                     |---------|    |         |
            |    2    |                                  |    4    |                                     |    3    |    |         |    
            |---------|                                  |---------|                                     |---------|    |         |                                      
            |    3    |                                  |    5    |                                     |    4    |    |         |
            |---------|                                  |---------|                                     |---------|    |         |
            |    4    |                                  |    6    |                                     |    5    |    |         |
            +---------+                                  +---------+                                     |---------|    |         | 
                                                                                                         |    6    |    |         |
                                                                                                         +---------+    +---------+
             Stack A        Stack B                        Stack A        Stack B                          Stack A        Stack B
---

## › Visualizer
The visualizer, represents the behavior of the algorithm you apply. [(VISUALIZER)](https://github.com/o-reo/push_swap_visualizer).


<h1 align="center"> 
	PUSH SWAP - BONUS
 </h1>
The bonus part of this project can only be done if you achieve a 100/100 on the mandatory part, and it consists of replicating the behavior of a part of the checker, specifically:
	◇ Your executable must accept numbers as input (./checker 2 1), where you must output the moves (e.g., sa in this case) directly to the terminal (STDOUT_FILENO). When pressing Ctrl + D, the checker should display OK or KO depending on whether the numbers are sorted or not.

 ---

## 📫 Contact

Feel free to reach out or explore more of my work:

[<img src="https://img.shields.io/badge/LinkedIn-0077B5?style=flat-square&logo=linkedin&logoColor=white"/>](https://www.linkedin.com/in/aitor-guinea-961635348/)
[<img src="https://img.shields.io/badge/GitHub-aguinea1-black?style=flat-square&logo=github"/>](https://github.com/aguinea1)
[<img src="https://img.shields.io/badge/Email-aguinea1@gmail.com-red?style=flat-square&logo=gmail&logoColor=white"/>](mailto:aguinea1@gmail.com)

---
⭐
