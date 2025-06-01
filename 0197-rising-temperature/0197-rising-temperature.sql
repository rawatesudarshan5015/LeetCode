# Write your MySQL query statement below
select w.id
from  weather w join weather t on datediff(w.recordDate,t.recordDate)=1
where w.temperature>t.temperature;