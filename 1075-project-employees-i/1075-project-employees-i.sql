# Write your MySQL query statement below
select Project.project_id,round(avg(Employee.experience_years),2) as average_years
From Project
join Employee ON Project.employee_id=Employee.employee_id
group by project_id