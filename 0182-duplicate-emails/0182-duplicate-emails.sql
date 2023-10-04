# Write your MySQL query statement below
# select distinct p1.email as Email from Person p1 join Person P2 where P1.id <> P2.id and p1.email = p2.email;

SELECT 
    Email 
FROM 
    Person GROUP BY email HAVING COUNT(1) > 1 