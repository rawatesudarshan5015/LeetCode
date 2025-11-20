# Write your MySQL query statement be
SELECT w1.id
from Weather w1 
INNER JOIN Weather w2
WHERE DATEDIFF(w1.recordDate,w2.recordDate)=1 and
w1.temperature>w2.temperature;