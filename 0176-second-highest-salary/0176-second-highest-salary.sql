# Write your MySQL query statement below
# select distinct salary as SecondHighestSalary from employee limit 1 offset 1;



select max(salary) as SecondHighestSalary from employee where salary not in (select max(salary) from employee);