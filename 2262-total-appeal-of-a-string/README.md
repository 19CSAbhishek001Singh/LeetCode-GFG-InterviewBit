<h2><a href="https://leetcode.com/problems/total-appeal-of-a-string/">2262. Total Appeal of A String</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <b style="user-select: auto;">appeal</b> of a string is the number of <strong style="user-select: auto;">distinct</strong> characters found in the string.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, the appeal of <code style="user-select: auto;">"abbca"</code> is <code style="user-select: auto;">3</code> because it has <code style="user-select: auto;">3</code> distinct characters: <code style="user-select: auto;">'a'</code>, <code style="user-select: auto;">'b'</code>, and <code style="user-select: auto;">'c'</code>.</li>
</ul>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">total appeal of all of its <strong style="user-select: auto;">substrings</strong>.</strong></em></p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters within a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abbca"
<strong style="user-select: auto;">Output:</strong> 28
<strong style="user-select: auto;">Explanation:</strong> The following are the substrings of "abbca":
- Substrings of length 1: "a", "b", "b", "c", "a" have an appeal of 1, 1, 1, 1, and 1 respectively. The sum is 5.
- Substrings of length 2: "ab", "bb", "bc", "ca" have an appeal of 2, 1, 2, and 2 respectively. The sum is 7.
- Substrings of length 3: "abb", "bbc", "bca" have an appeal of 2, 2, and 3 respectively. The sum is 7.
- Substrings of length 4: "abbc", "bbca" have an appeal of 3 and 3 respectively. The sum is 6.
- Substrings of length 5: "abbca" has an appeal of 3. The sum is 3.
The total sum is 5 + 7 + 7 + 6 + 3 = 28.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "code"
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation:</strong> The following are the substrings of "code":
- Substrings of length 1: "c", "o", "d", "e" have an appeal of 1, 1, 1, and 1 respectively. The sum is 4.
- Substrings of length 2: "co", "od", "de" have an appeal of 2, 2, and 2 respectively. The sum is 6.
- Substrings of length 3: "cod", "ode" have an appeal of 3 and 3 respectively. The sum is 6.
- Substrings of length 4: "code" has an appeal of 4. The sum is 4.
The total sum is 4 + 6 + 6 + 4 = 20.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
</ul>
</div>