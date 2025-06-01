# Write your MySQL query statement below
SELECT c.customer_id, count(c.customer_id) as count_no_trans
FROM Visits c
LEFT JOIN Transactions t
ON c.visit_id=t.visit_id
WHERE t.transaction_id is NULL
Group by c.customer_id;