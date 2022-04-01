# Search in a matrix
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a matrix <strong style="user-select: auto;">mat</strong>[][] of size <strong style="user-select: auto;">N</strong>&nbsp;x&nbsp;<strong style="user-select: auto;">M</strong>, where every row and column is sorted in increasing order, and a number <strong style="user-select: auto;">X</strong> is given. The task is to find whether element <strong style="user-select: auto;">X</strong> is present in the matrix or not.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
N = 3, M = 3
mat[][] = 3 30 38 
         44 52 54 
         57 60 69
X = 62
<strong style="user-select: auto;">Output</strong>:
0
<strong style="user-select: auto;">Explanation</strong>:
62 is not present in the
matrix, so output is 0</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
N = 1, M = 6
mat[][]<strong style="user-select: auto;"> </strong>= 18 21 27 38 55 67
X = 55
<strong style="user-select: auto;">Output</strong>:
1
<strong style="user-select: auto;">Explanation</strong>:
55 is present in the
matrix at 5th cell.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. You just have to complete the function&nbsp;matSearch()&nbsp;which takes a 2D matrix&nbsp;<strong style="user-select: auto;">mat</strong>[][],&nbsp;its dimensions <strong style="user-select: auto;">N</strong> and <strong style="user-select: auto;">M</strong> and integer <strong style="user-select: auto;">X</strong> as inputs and returns 1 if the element <strong style="user-select: auto;">X</strong> is present in the matrix and 0 otherwise.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>:&nbsp;O(N+M).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space</strong>:&nbsp;O(1).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints</strong>:<br style="user-select: auto;">
1 &lt;= N, M &lt;= 1005<br style="user-select: auto;">
1 &lt;= mat[][] &lt;= 10000000<br style="user-select: auto;">
1&lt;= X &lt;= 10000000</span></p>
 <p style="user-select: auto;"></p>
            </div>