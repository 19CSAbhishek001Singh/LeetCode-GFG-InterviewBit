# Word Break (Trie)
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string <strong style="user-select: auto;">A </strong>and a dictionary of n words <strong style="user-select: auto;">B</strong>, find out if A&nbsp;can be segmented into a space-separated sequence of dictionary words.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
n = 12
B = { "i", "like", "sam", "sung", "samsung",
"mobile","ice","cream", "icecream", "man",
"go", "mango" }, A = "ilike"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation: </strong>The string can be segmented as
"i like".</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: </span>
<span style="font-size: 18px; user-select: auto;">n = 12 </span>
<span style="font-size: 18px; user-select: auto;">B = { "i", "like", "sam", "sung", "samsung",
"mobile","ice","cream", "icecream", "man", 
"go", "mango" }, A = "ilikesamsung" </span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> 1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation</strong>: The string can be segmented as 
"i like samsung" or "i like sam sung".</span>

</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete&nbsp;<strong style="user-select: auto;">wordBreak()</strong>&nbsp;function which takes a string and list of strings as a parameter&nbsp;and returns 1 if it is possible to break words, else return&nbsp;0. You don't need to read any input or print any output, it is done by driver code.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected time complexity:&nbsp;</strong>O(n*l) wwhere l is the leght of longest string present in dictionary</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected auxiliary space:</strong>&nbsp;O(|A| + k) , where k = sum of length of all strings present in B</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints</strong>:<br style="user-select: auto;">
1 &lt;= N &lt;= 12<br style="user-select: auto;">
1 &lt;= s &lt;=1000 , where s =&nbsp;length of string A<br style="user-select: auto;">
&nbsp;The length of each word is less than 15.</span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>