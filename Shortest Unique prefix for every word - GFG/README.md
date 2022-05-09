# Shortest Unique prefix for every word
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of words, find all shortest unique prefixes to represent each word in the given array. Assume that no word is prefix of another.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>N = 4
arr[] = {"zebra", "dog", "duck", "dove"}
<strong style="user-select: auto;">Output: </strong>z dog du dov
<strong style="user-select: auto;">Explanation: </strong>
z =&gt; zebra 
dog =&gt; dog 
duck =&gt; du 
dove =&gt; dov </span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>N = 3
arr[] =  {"geeksgeeks", "geeksquiz",
                       "geeksforgeeks"};
<strong style="user-select: auto;">Output: </strong>geeksg geeksq geeksf
<strong style="user-select: auto;">Explanation: </strong>
geeksgeeks =&gt; geeksg 
geeksquiz =&gt; geeksq 
geeksforgeeks =&gt; geeksf</span></pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task:</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't have to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">findPrefixes()</strong> which takes the array of strings and it's size N as input and returns a list of shortest unique prefix for each word </span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*length of each word)</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N*length of each word)</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 ≤ N, Length of each word ≤ 1000</span></div>
 <p style="user-select: auto;"></p>
            </div>