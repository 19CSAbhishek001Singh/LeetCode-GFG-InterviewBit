# Unique rows in boolean matrix
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary matrix your task is to find all unique rows of the given matrix. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>row = 3, col = 4 
M[][] = {{1 1 0 1},{1 0 0 1},{1 1 0 1}}
<strong style="user-select: auto;">Output: </strong>1 1 0 1 $1 0 0 1 $<strong style="user-select: auto;">
Explanation: </strong>Above the matrix of size 3x4
looks like
1 1 0 1
1 0 0 1
1 1 0 1
The two unique rows are 1 1 0 1 and
1 0 0 1 .</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You only need to implement the given function&nbsp;<strong style="user-select: auto;">uniqueRow()</strong>.&nbsp;The function takes three arguments the first argument is a matrix <strong style="user-select: auto;">M</strong> and the next two arguments are <strong style="user-select: auto;">row</strong>&nbsp;and <strong style="user-select: auto;">col</strong>&nbsp;denoting the rows and columns&nbsp;of the matrix.&nbsp;The function should <strong style="user-select: auto;">return</strong> the list of the unique row of the martrix. Do not read input, instead use the arguments given in the function.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>The drivers code print the rows "$" separated.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(row * col)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(row * col)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=row,col&lt;=40<br style="user-select: auto;">
0&lt;=M[][]&lt;=1</span></p>
 <p style="user-select: auto;"></p>
            </div>