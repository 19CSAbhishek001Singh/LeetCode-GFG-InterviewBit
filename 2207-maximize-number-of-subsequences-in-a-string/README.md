<h2><a href="https://leetcode.com/problems/maximize-number-of-subsequences-in-a-string/">2207. Maximize Number of Subsequences in a String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">text</code> and another <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">pattern</code> of length <code style="user-select: auto;">2</code>, both of which consist of only lowercase English letters.</p>

<p style="user-select: auto;">You can add <strong style="user-select: auto;">either</strong> <code style="user-select: auto;">pattern[0]</code> <strong style="user-select: auto;">or</strong> <code style="user-select: auto;">pattern[1]</code> anywhere in <code style="user-select: auto;">text</code> <strong style="user-select: auto;">exactly once</strong>. Note that the character can be added even at the beginning or at the end of <code style="user-select: auto;">text</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of times</em> <code style="user-select: auto;">pattern</code> <em style="user-select: auto;">can occur as a <strong style="user-select: auto;">subsequence</strong> of the modified </em><code style="user-select: auto;">text</code>.</p>

<p style="user-select: auto;">A <b style="user-select: auto;">subsequence</b> is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> text = "abdcdbc", pattern = "ac"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>
If we add pattern[0] = 'a' in between text[1] and text[2], we get "ab<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>dcdbc". Now, the number of times "ac" occurs as a subsequence is 4.
Some other strings which have 4 subsequences "ac" after adding a character to text are "<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>abdcdbc" and "abd<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>cdbc".
However, strings such as "abdc<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>dbc", "abd<u style="user-select: auto;"><strong style="user-select: auto;">c</strong></u>cdbc", and "abdcdbc<u style="user-select: auto;"><strong style="user-select: auto;">c</strong></u>", although obtainable, have only 3 subsequences "ac" and are thus suboptimal.
It can be shown that it is not possible to get more than 4 subsequences "ac" by adding only one character.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> text = "aabb", pattern = "ab"
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong>
Some of the strings which can be obtained from text and have 6 subsequences "ab" are "<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>aabb", "aa<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>bb", and "aab<u style="user-select: auto;"><strong style="user-select: auto;">b</strong></u>b".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= text.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">pattern.length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">text</code> and <code style="user-select: auto;">pattern</code> consist only of lowercase English letters.</li>
</ul>
</div>