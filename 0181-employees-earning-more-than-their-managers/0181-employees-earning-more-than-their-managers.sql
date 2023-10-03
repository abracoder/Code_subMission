# Write your MySQL query statement below


select e2.name as Employee from employee e1  join employee e2 on e1.id = e2.managerid where e1.salary < e2.salary;