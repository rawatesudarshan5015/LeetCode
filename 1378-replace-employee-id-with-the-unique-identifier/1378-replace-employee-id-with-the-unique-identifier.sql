# Write your MySQL query statement below

select E.unique_id, emp.name from Employees emp left join EmployeeUNI E on emp.id = E.id; 