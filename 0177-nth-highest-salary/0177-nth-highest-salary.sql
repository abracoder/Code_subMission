# -CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
# -BEGIN
# # delcare m INT
# # set m = N-1;
# # -  RETURN (
# # -      # Write your MySQL query statement below.
    
# #         # select salary from employee e1 where (N-1) = (select count(distinct salary) from employee e2 where e1.salary < e2.salary)
# #         select max(distinct salary) from employee limit 1 offset m;
# # -
# # -  );
# declare M INT;
# set M = N - 1;
# RETURN (
# # Write your MySQL query statement below.
# select distinct Salary
# from Employee
# order by Salary desc
# limit 1 offset M
# );
# -END

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
declare M INT;
set M = N - 1;
RETURN (
# Write your MySQL query statement below.
select max(salary) from employee e1 where (N-1) = (select count(distinct salary) from employee e2 where e1.salary < e2.salary)
);
END