# Longest common prefix
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings&nbsp;<strong style="user-select: auto;">str1</strong> and <strong style="user-select: auto;">str2</strong>&nbsp;of the same length. Find the longest prefix of str1 which is common in str2. </span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;"> </strong></span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
str1 = "geeks"
str2 = "dgeek"<strong style="user-select: auto;">
Output:</strong> 0 3
<strong style="user-select: auto;">Explanation: 
</strong>Longest prefix from str1
present in str2 is "geek" 
starting at index 0 in str1
and ending at index 3.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>str1 = "practicegeeks"
str2 = "coderpractice"
<strong style="user-select: auto;">Output: </strong>0 7
<strong style="user-select: auto;">Explanation: 
</strong>Longest prefix from str1
present in str2 is "practice"
starting at index 0 and ending 
at index 7 in str1.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your&nbsp;Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;">longestCommonPrefix()&nbsp;</strong>which takes&nbsp;strings str1 and&nbsp;str2 as input parameters&nbsp;and returns a list of integers whose first two elements&nbsp;denote&nbsp;the start and end index of str1&nbsp;at which the longest common prefix of str1 is found&nbsp;in str2.&nbsp;<br style="user-select: auto;">
If there is no common prefix then the returning list should contain [-1,-1].</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(|str1|*|str2|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(|str1|)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;=&nbsp;|str1|,&nbsp;|str2|&nbsp;&lt;= 1000<br style="user-select: auto;">
str1 and str2 contain only lowercase alphabets.</span></p>
 <p style="user-select: auto;"></p>
            </div>