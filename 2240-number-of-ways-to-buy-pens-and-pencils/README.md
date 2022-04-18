<h2><a href="https://leetcode.com/problems/number-of-ways-to-buy-pens-and-pencils/">2240. Number of Ways to Buy Pens and Pencils</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer <code style="user-select: auto;">total</code> indicating the amount of money you have. You are also given two integers <code style="user-select: auto;">cost1</code> and <code style="user-select: auto;">cost2</code> indicating the price of a pen and pencil respectively. You can spend <strong style="user-select: auto;">part or all</strong> of your money to buy multiple quantities (or none) of each kind of writing utensil.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">number of distinct ways</strong> you can buy some number of pens and pencils.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> total = 20, cost1 = 10, cost2 = 5
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong> The price of a pen is 10 and the price of a pencil is 5.
- If you buy 0 pens, you can buy 0, 1, 2, 3, or 4 pencils.
- If you buy 1 pen, you can buy 0, 1, or 2 pencils.
- If you buy 2 pens, you cannot buy any pencils.
The total number of ways to buy pens and pencils is 5 + 3 + 1 = 9.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> total = 5, cost1 = 10, cost2 = 10
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The price of both pens and pencils are 10, which cost more than total, so you cannot buy any writing utensils. Therefore, there is only 1 way: buy 0 pens and 0 pencils.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= total, cost1, cost2 &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>