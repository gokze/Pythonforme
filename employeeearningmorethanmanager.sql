# Write your MySQL query statement below
SELECT a.name  as Employee FROM Employee a
JOIN Employee b on a.managerid=b.id
WHERE a.salary>b.salary
